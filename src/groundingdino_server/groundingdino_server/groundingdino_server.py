#!/usr/bin/env python3
import os
import sys
from typing import List, Optional

import numpy as np
import cv2
import torch
from torchvision.ops.boxes import box_convert

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
from rclpy.time import Time

from sensor_msgs.msg import Image, CameraInfo
from std_msgs.msg import Float32MultiArray
from geometry_msgs.msg import PoseStamped
from cv_bridge import CvBridge
import image_geometry
import tf2_ros
import tf2_geometry_msgs

from groundingdino_interfaces.msg import ObjectPosition, ObjectPositions
from groundingdino_interfaces.srv import GroundingDinoPredict

# -------------------------------------------------------------------
# Optional: add venv + repo to sys.path (you can also do this via env in launch)
# -------------------------------------------------------------------
VENV_SITE = "/home/sutd/gdinov2_env/lib/python3.10/site-packages"
if os.path.isdir(VENV_SITE) and VENV_SITE not in sys.path:
    sys.path.insert(0, VENV_SITE)

REPO_PATH = "/home/sutd/GroundingDINO"
if os.path.isdir(REPO_PATH) and REPO_PATH not in sys.path:
    sys.path.insert(0, REPO_PATH)

from groundingdino.util.inference import load_model, predict, load_image


class GroundingDinoServiceNode(Node):
    def __init__(self) -> None:
        super().__init__("groundingdino_service")

        # Thresholds
        self.box_threshold = 0.35
        self.text_threshold = 0.25
        self.depth_threshold = 2000.0  # mm

        # Latest data buffers
        self.depth_image: Optional[np.ndarray] = None
        self.camera_info: Optional[CameraInfo] = None
        self.color_image: Optional[np.ndarray] = None

        # Workspace bbox [x_min, x_max, y_min, y_max]
        self.bbox = [0, 0, 0, 0]

        self.camera_model = image_geometry.PinholeCameraModel()
        self.camera_frame = "camera_color_optical_frame"
        self.cv_bridge = CvBridge()
        self.latest_result: Optional[ObjectPositions] = None
        self.source_image_path = "output/generated_image.jpeg"

        cfg_path = os.path.join(REPO_PATH, "groundingdino/config/GroundingDINO_SwinT_OGC.py")
        weight_path = os.path.join(REPO_PATH, "weights/groundingdino_swint_ogc.pth")
        self.model = load_model(cfg_path, weight_path)
        self.get_logger().info("Loaded GroundingDINO model")


        camera_color_topic = "/right_camera/color/image_raw"
        camera_info_topic = "/right_camera/aligned_depth_to_color/camera_info"
        camera_depth_topic = "/right_camera/aligned_depth_to_color/image_raw"
        bbox_topic = "/right_camera/workspace"  # adjust if your bbox node uses a different name

        # Subscribers
        self.depth_image_sub = self.create_subscription(
            Image, camera_depth_topic, self.depth_image_callback, 10
        )
        self.camera_info_sub = self.create_subscription(
            CameraInfo, camera_info_topic, self.camera_info_callback, 10
        )
        self.color_image_sub = self.create_subscription(
            Image, camera_color_topic, self.color_image_callback, 10
        )
        self.bbox_sub = self.create_subscription(
            Float32MultiArray, bbox_topic, self.workspace_callback, 10
        )

        # Service
        # GroundingDinoPredict.srv is assumed to be:
        #   string prompt
        #   ---
        #   groundingdino_interfaces/ObjectPositions result
        self.srv = self.create_service(
            GroundingDinoPredict,
            "grounding_dino_predict",   # client must use the same name
            self.get_object_locations,
        )

        # Streaming publisher – publishes first object pose at 10 Hz
        self.stream_pub = self.create_publisher(PoseStamped, "object_position_stream", 10)
        self.timer = self.create_timer(0.1, self.publish_stream)

        # TF
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

    # -------------------------------------------------------------------
    # Callbacks and helpers
    # -------------------------------------------------------------------

    def workspace_callback(self, msg: Float32MultiArray):
        self.bbox = list(msg.data)

    def color_image_callback(self, msg: Image):
        self.color_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")

    def depth_image_callback(self, msg: Image):
        self.depth_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")

    def camera_info_callback(self, msg: CameraInfo):
        self.camera_info = msg
        self.camera_model.fromCameraInfo(msg)

    def transform_pose(self, pose: PoseStamped, target_frame: str) -> Optional[PoseStamped]:
        now = Time()
        try:
            if not self.tf_buffer.can_transform(
                target_frame,
                pose.header.frame_id,
                now,
                timeout=Duration(seconds=3.0),
            ):
                self.get_logger().warn(
                    f"No transform from {pose.header.frame_id} to {target_frame}."
                )
                return None

            transform = self.tf_buffer.lookup_transform(
                target_frame,
                pose.header.frame_id,
                now,
            )
            transformed_pose = tf2_geometry_msgs.do_transform_pose(pose, transform)
            return transformed_pose
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().error(f"Transform error: {e}")
            return None

    def publish_stream(self):
        if self.latest_result is None or not self.latest_result.object_position:
            return

        position = PoseStamped()
        position.header.frame_id = "world"
        position.header.stamp = self.get_clock().now().to_msg()
        # assumes ObjectPosition.pose is a PoseStamped or has .pose
        position.pose = self.latest_result.object_position[0].pose.pose
        self.stream_pub.publish(position)

    def get_camera_point(
        self,
        x: int,
        y: int,
        depth_image: np.ndarray,
        camera_info: CameraInfo,
        camera_model: image_geometry.PinholeCameraModel,
        depth_threshold: float,
    ):
        if depth_image is None or camera_info is None:
            return None, None

        h, w = depth_image.shape[:2]
        if x < 0 or x >= w or y < 0 or y >= h:
            self.get_logger().info(f"Pixel ({x}, {y}) out of bounds for depth image {w}x{h}")
            return None, None

        depth = depth_image[y, x] / 1000.0  # mm -> m
        if np.isnan(depth) or depth == 0.0 or depth > depth_threshold / 1000.0:
            self.get_logger().info(f"Invalid depth at pixel ({x}, {y}): {depth} m")
            return None, None

        ray_dir = np.array(camera_model.projectPixelTo3dRay((x, y)))
        point_3d = ray_dir * depth  # [X_cam, Y_cam, Z_cam]
        return point_3d, depth

    def camera_point_to_world_pose(self, point_3d, camera_frame: str) -> Optional[PoseStamped]:
        pose = PoseStamped()
        pose.header.frame_id = camera_frame
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = float(point_3d[0])
        pose.pose.position.y = float(point_3d[1])
        pose.pose.position.z = float(point_3d[2])
        pose.pose.orientation.w = 1.0
        return self.transform_pose(pose, "world")

    def annotate(
        self,
        image_source: np.ndarray,
        boxes: torch.Tensor,
        logits: torch.Tensor,
        phrases: List[str],
    ) -> np.ndarray:
        """Simple OpenCV annotation of DINO detections."""
        annotated = image_source.copy()
        h, w, _ = annotated.shape

        # boxes are in cxcywh relative coordinates
        boxes_abs = boxes * torch.Tensor([w, h, w, h])
        xyxy = box_convert(boxes=boxes_abs, in_fmt="cxcywh", out_fmt="xyxy").numpy().astype(int)

        for i, (phrase, logit) in enumerate(zip(phrases, logits)):
            x_min, y_min, x_max, y_max = xyxy[i]
            cv2.rectangle(annotated, (x_min, y_min), (x_max, y_max), (0, 255, 0), 2)
            label = f"{phrase} {float(logit):.2f}"
            cv2.putText(
                annotated,
                label,
                (x_min, max(0, y_min - 5)),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                (0, 255, 0),
                1,
                cv2.LINE_AA,
            )

        return cv2.cvtColor(annotated, cv2.COLOR_RGB2BGR)



    def get_object_locations(self, request: GroundingDinoPredict.Request,
                             response: GroundingDinoPredict.Response):

        if self.color_image is None or not any(self.bbox):
            # No image or no workspace defined – return empty result
            response.result = ObjectPositions()
            return response

        x_min, x_max, y_min, y_max = map(int, self.bbox)

        # Guard against invalid bbox
        h_img, w_img, _ = self.color_image.shape
        x_min = max(0, min(w_img - 1, x_min))
        x_max = max(0, min(w_img, x_max))
        y_min = max(0, min(h_img - 1, y_min))
        y_max = max(0, min(h_img, y_max))
        if x_max <= x_min or y_max <= y_min:
            self.get_logger().warn("Invalid workspace bbox; returning empty result")
            response.result = ObjectPositions()
            return response

        cropped_color_image = self.color_image[y_min:y_max, x_min:x_max]

        # Convert to RGB for DINO and save temp input
        color_image_rgb = cv2.cvtColor(cropped_color_image, cv2.COLOR_BGR2RGB)
        os.makedirs("output", exist_ok=True)
        cv2.imwrite(self.source_image_path, color_image_rgb)

        image_source, image = load_image(self.source_image_path)
        boxes, logits, phrases = predict(
            model=self.model,
            image=image,
            caption=request.prompt,
            box_threshold=self.box_threshold,
            text_threshold=self.text_threshold,
        )

        # If no detections, return empty
        if boxes.numel() == 0:
            result = ObjectPositions()
            result.workspace_bbox.data = list(self.bbox)
            response.result = result
            return response

        annotated_frame = self.annotate(image_source, boxes, logits, phrases)
        os.makedirs("inference_images", exist_ok=True)
        cv2.imwrite("inference_images/annotated_image.jpg", annotated_frame)

        result = ObjectPositions()
        result.workspace_bbox.data = list(self.bbox)

        # Convert boxes from relative cxcywh to absolute xyxy in FULL image coords
        h_src, w_src, _ = image_source.shape
        boxes_abs = boxes * torch.Tensor([w_src, h_src, w_src, h_src])
        xyxy = box_convert(boxes=boxes_abs, in_fmt="cxcywh", out_fmt="xyxy").numpy().astype(int)

        depth_image = self.depth_image
        if depth_image is not None:
            # Inpaint zero-depth regions to smooth gaps
            mask = (depth_image == 0).astype(np.uint8)
            depth_image = cv2.inpaint(depth_image, mask, inpaintRadius=3, flags=cv2.INPAINT_NS)
        else:
            self.get_logger().warn("No depth image available; 3D info will be missing")

        for i, phrase in enumerate(phrases):
            object_position = ObjectPosition()
            object_position.id = i
            object_position.class_label = phrase

            # Box in cropped image -> full image
            rel_x_min, rel_y_min, rel_x_max, rel_y_max = xyxy[i]
            box_x_min = rel_x_min + x_min
            box_y_min = rel_y_min + y_min
            box_x_max = rel_x_max + x_min
            box_y_max = rel_y_max + y_min

            object_position.x_min = int(box_x_min)
            object_position.y_min = int(box_y_min)
            object_position.x_max = int(box_x_max)
            object_position.y_max = int(box_y_max)

            if depth_image is not None and self.camera_info is not None:
                # Center pixel in full image
                cx = int((box_x_min + box_x_max) / 2)
                cy = int((box_y_min + box_y_max) / 2)

                point_cam, depth = self.get_camera_point(
                    cx, cy,
                    depth_image=depth_image,
                    camera_info=self.camera_info,
                    camera_model=self.camera_model,
                    depth_threshold=self.depth_threshold,
                )

                if point_cam is not None:
                    object_position.depth = float(depth)
                    object_position.camera_point.x = float(point_cam[0])
                    object_position.camera_point.y = float(point_cam[1])
                    object_position.camera_point.z = float(point_cam[2])

                    pose_world = self.camera_point_to_world_pose(point_3d=point_cam,
                                                                 camera_frame=self.camera_frame)
                    if pose_world is not None:
                        object_position.pose = pose_world

            result.object_position.append(object_position)

        # Attach annotated image
        result.image = self.cv_bridge.cv2_to_imgmsg(annotated_frame, encoding="bgr8")
        self.latest_result = result

        response.result = result
        return response


def main(args=None):
    rclpy.init(args=args)
    node = GroundingDinoServiceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
