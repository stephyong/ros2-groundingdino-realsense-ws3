#!/usr/bin/env python3
import os
import sys

VENV_SITE = "/home/sutd/gdinov2_env/lib/python3.10/site-packages"
if os.path.isdir(VENV_SITE) and VENV_SITE not in sys.path:
    sys.path.insert(0, VENV_SITE)

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from groundingdino_interfaces.srv import GroundingDinoPredict
import cv2
import torch
from torchvision.ops.boxes import box_convert
from cv_bridge import CvBridge

REPO_PATH = "/home/sutd/GroundingDINO"
if os.path.isdir(REPO_PATH) and REPO_PATH not in sys.path:
    sys.path.insert(0, REPO_PATH)

from groundingdino.util.inference import load_model, predict
from groundingdino_interfaces.msg import ObjectPosition, ObjectPositions
from groundingdino_interfaces.srv import GroundingDinoPredict

class groundingdino1(Node):

    def __init__(self) -> None:
        super().__init__("deprojection_node")
        #model bounding box thereshold parameters
        self.box_threshold = 0.35
        self.text_threshold = 0.25
        self.call_interval = 10.0
        self.depth_threshold = 2000.0

        self.depth_image = None
        self.camera_info = None
        self.color_image = None

        self.bbox = [0, 0, 0, 0]  # Default values for the camera's workspace bounding box, detections only happen in this area
        #[x-min, x-max, y-min, y-max]

        self.camera_model = image_geometry.PinholeCameraModel()
        self.cv_bridge = CvBridge()
        self.latest_result = None
        self.recursion = 0
        self.source_image_path = "output/generated_image.jpeg"
        # Load the Grounding Dino model
        self.model = load_model("groundingdino/config/GroundingDINO_SwinT_OGC.py", "weights/groundingdino_swint_ogc.pth")
        self.get_logger().info("Loaded the Grounding Dino model")

        # Camera topics
        camera_color_topic = "camera/camera/color/image_raw"
        camera_info_topic = "camera/camera/aligned_depth_to_color/camera_info"
        camera_depth_topic = "camera/camera/aligned_depth_to_color/image_raw"

        # Workspace bounding box topics
        bbox_topic = "camera/camera/workspace"



        # Subscribers
        self.depth_image_sub = self.create_subscription(Image, camera_depth_topic, self.depth_image_callback, 10)
        self.camera_info_sub = self.create_subscription(CameraInfo,camera_info_topic, self.camera_info_callback, 10)
        self.color_image_sub = self.create_subscription(Image, camera_color_topic, self.color_image_callback, 10)


        # Subscribers for workspace bounding boxes
        self.bbox_sub = self.create_subscription(Float32MultiArray,bbox_topic, self.workspace_callback, 10)
        # Services
        self.srv = self.create_service(GroundingDinoPredict, "grounding_dino_predict", self.get_object_locations)

        # Publisher for streamed position
        self.stream_pub = self.create_publisher(PoseStamped, "object_position_stream", 10)
        self.timer = self.create_timer(0.1, self.publish_stream)  # 10 Hz

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)


    def __del__(self):
        del self.model

    def workspace_callback(self, msg: Float32MultiArray):
        self.bbox = msg.data


    def annotate(self, image_source: np.ndarray, boxes: torch.Tensor, logits: torch.Tensor, phrases: List[str]) -> np.ndarray:
        h, w, _ = image_source.shape
        boxes = boxes * torch.Tensor([w, h, w, h])
        xyxy = box_convert(boxes=boxes, in_fmt="cxcywh", out_fmt="xyxy").numpy()
        detections = sv.Detections(xyxy=xyxy)
        labels = [f"{i}: {phrase} {logit:.2f}" for i, (phrase, logit) in enumerate(zip(phrases, logits))]
        bbox_annotator = sv.BoxAnnotator(color_lookup=sv.ColorLookup.INDEX)
        label_annotator = sv.LabelAnnotator(color_lookup=sv.ColorLookup.INDEX)
        annotated_frame = cv2.cvtColor(image_source, cv2.COLOR_RGB2BGR)
        annotated_frame = bbox_annotator.annotate(scene=annotated_frame, detections=detections)
        annotated_frame = label_annotator.annotate(scene=annotated_frame, detections=detections, labels=labels)
        return annotated_frame

    def transform_pose(self, pose: PoseStamped, target_frame: str) -> PoseStamped:
        try:
          self.tf_buffer.can_transform(
              target_frame,
              pose.header.frame_id,
              rclpy.time.Time(),
              timeout=rclpy.duration.Duration(seconds=3.0)
          )
          transform = self.tf_buffer.lookup_transform(
              target_frame,
              pose.header.frame_id,
              rclpy.time.Time()
          )
          transformed_pose = tf2_geometry_msgs.do_transform_pose(pose, transform)
          return transformed_pose
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().error(f"Transform error: {e}")
            return None

    def publish_stream(self, event):
        if self.latest_result is None:
            return
        position = PoseStamped()
        position.header.frame_id = "world"
        position.header.stamp = rclpy.time.Time()
        position.pose = self.latest_result.object_position[0].pose.pose
        self.stream_pub.publish(position)

    def get_3d_position(self, x, y, depth_image, camera_info, camera_model, depth_threshold):
        if depth_image is None or camera_info is None:
            return None

        depth = depth_image[y, x] / 1000  # Convert to meters
        if np.isnan(depth) or depth == 0 or depth > depth_threshold / 1000.0:  # Validate using threshold
            self.get_logger().info(f"Invalid depth at pixel ({x}, {y}): {depth} m")
            self.recursion += 1
            if self.recursion <= 10:
                return self.get_3d_position(x, y, depth_image=depth_image, camera_info=camera_info, camera_model=camera_model, depth_threshold=depth_threshold)
            else:
                self.recursion = 0
                return None

        point_3d = np.array(camera_model.projectPixelTo3dRay((x, y))) * depth
        pose = PoseStamped()
        pose.header.frame_id = camera_model.tf_frame
        pose.header.stamp = rclpy.time.Time()
        pose.pose.position.x, pose.pose.position.y, pose.pose.position.z = point_3d
        pose.pose.orientation.w = 1.0
        return self.transform_pose(pose, "world")

    def get_object_locations(self, request: GroundingDinoPredict.Request):
        if self.color_image is None or not any(self.bbox):
            return GetObjectLocationsResponse()

        x_min, x_max, y_min, y_max = map(int, self.bbox)
        cropped_color_image = self.color_image[y_min:y_max, x_min:x_max]

        color_image = cv2.cvtColor(cropped_color_image, cv2.COLOR_BGR2RGB)
        cv2.imwrite(self.source_image_path, color_image)

        image_source, image = load_image(self.source_image_path)
        boxes, logits, phrases = predict(
            model=self.model,
            image=image,
            caption=request.prompt,
            box_threshold=self.box_threshold,
            text_threshold=self.text_threshold
        )
        annotated_frame = self.annotate(
            image_source=image_source, boxes=boxes, logits=logits, phrases=phrases
        )
        cv2.imwrite("inference_images/annotated_image.jpg", annotated_frame)

        result = ObjectPositions()
        # NEW: also return the workspace bbox
        result.workspace_bbox.data = list(self.bbox)

        h, w, _ = image_source.shape
        boxes = boxes * torch.Tensor([w, h, w, h])
        xyxy = box_convert(boxes=boxes, in_fmt="cxcywh", out_fmt="xyxy").numpy().astype(int)

        depth_image = self.depth_image
        mask = (depth_image == 0).astype(np.uint8)
        depth_image = cv2.inpaint(depth_image, mask, inpaintRadius=3, flags=cv2.INPAINT_NS)

        for i in range(len(phrases)):
            object_position = ObjectPosition()
            object_position.id = i
            object_position.class_label = phrases[i]

            # --- 2D bounding box in FULL image coordinates ---
            box_x_min = xyxy[i][0] + x_min
            box_y_min = xyxy[i][1] + y_min
            box_x_max = xyxy[i][2] + x_min
            box_y_max = xyxy[i][3] + y_min

            object_position.x_min = box_x_min
            object_position.y_min = box_y_min
            object_position.x_max = box_x_max
            object_position.y_max = box_y_max

            # --- Center pixel in full image ---
            cx = int((box_x_min + box_x_max) / 2)
            cy = int((box_y_min + box_y_max) / 2)

            # --- 3D point in CAMERA frame + depth ---
            point_cam, depth = self.get_camera_point(
                cx, cy,
                depth_image=depth_image,
                camera_info=self.camera_info,
                camera_model=self.camera_model,
                depth_threshold=self.depth_threshold
            )

            if point_cam is None:
                # skip this detection if no valid depth
                continue

            # Fill depth scalar (m)
            object_position.depth = float(depth)

            # Fill 3D coordinates in camera frame
            object_position.camera_point.x = float(point_cam[0])
            object_position.camera_point.y = float(point_cam[1])
            object_position.camera_point.z = float(point_cam[2])

            # --- World-frame pose of center ---
            pose_world = self.camera_point_to_world_pose(point_cam, self.camera_model.tf_frame)
            if pose_world is None:
                continue
            object_position.pose = pose_world

            # --- Optional: corners in camera frame ---
            # Top-left: (x_min, y_min)
            p_min_cam, _ = self.get_camera_point(
                box_x_min, box_y_min,
                depth_image=depth_image,
                camera_info=self.camera_info,
                camera_model=self.camera_model,
                depth_threshold=self.depth_threshold
            )
            if p_min_cam is not None:
                object_position.camera_xy_min.x = float(p_min_cam[0])
                object_position.camera_xy_min.y = float(p_min_cam[1])
                object_position.camera_xy_min.z = float(p_min_cam[2])

            # Bottom-right: (x_max, y_max)
            p_max_cam, _ = self.get_camera_point(
                box_x_max, box_y_max,
                depth_image=depth_image,
                camera_info=self.camera_info,
                camera_model=self.camera_model,
                depth_threshold=self.depth_threshold
            )
            if p_max_cam is not None:
                object_position.camera_xy_max.x = float(p_max_cam[0])
                object_position.camera_xy_max.y = float(p_max_cam[1])
                object_position.camera_xy_max.z = float(p_max_cam[2])

            result.object_position.append(object_position)

        result.image = self.cv_bridge.cv2_to_imgmsg(annotated_frame, encoding="bgr8")
        self.latest_result = result
        return GetObjectLocationsResponse(result)


    def color_image_callback(self, msg: Image):
        self.color_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")

    def depth_image_callback(self, msg: Image):
        self.depth_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")

    def camera_info_callback(self, msg: CameraInfo):
        self.camera_info = msg
        self.camera_model.fromCameraInfo(msg)
        self.camera_model.tf_frame = "camera_color_optical_frame"

    def get_camera_point(self, x, y, depth_image, camera_info, camera_model, depth_threshold):
        if depth_image is None or camera_info is None:
            return None, None

        depth = depth_image[y, x] / 1000.0  # mm -> m

        if np.isnan(depth) or depth == 0.0 or depth > depth_threshold / 1000.0:
            self.get_logger().info(f"Invalid depth at pixel ({x}, {y}): {depth} m")
            return None, None

        # Ray direction in camera frame, length 1
        ray_dir = np.array(camera_model.projectPixelTo3dRay((x, y)))
        point_3d = ray_dir * depth  # [X_cam, Y_cam, Z_cam]

        return point_3d, depth

    def camera_point_to_world_pose(self, point_3d, camera_frame: str):
        pose = PoseStamped()
        pose.header.frame_id = camera_frame
        pose.header.stamp = rclpy.time.Time()
        pose.pose.position.x = float(point_3d[0])
        pose.pose.position.y = float(point_3d[1])
        pose.pose.position.z = float(point_3d[2])
        pose.pose.orientation.w = 1.0
        return self.transform_pose(pose, "world")


def main(args=None):
    rclpy.init(args=args)
    service_node = groundingdino1()
    rclpy.spin(service_node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
