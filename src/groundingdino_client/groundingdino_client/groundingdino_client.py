#!/usr/bin/env python3
import os
import sys

VENV_SITE = "/home/sutd/gdinov2_env/lib/python3.10/site-packages"
if os.path.isdir(VENV_SITE) and VENV_SITE not in sys.path:
    sys.path.insert(0, VENV_SITE)

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from groundingdino_interfaces.msg import ObjectPosition, ObjectPositions
from groundingdino_interfaces.srv import GroundingDinoPredict


class GroundingDINOClient(Node):

    def __init__(self):
        super().__init__("groundingdino_client")

        # Text prompt parameter (what to detect)
        self.declare_parameter("text_prompt", "blue circle")
        self.text_prompt = (
            self.get_parameter("text_prompt")
            .get_parameter_value()
            .string_value
        )

        # How often to call the service (seconds)
        self.call_interval = 5.0

        self.bridge = CvBridge()
        self.last_image = None
        self.processing = False

        # Subscribe to camera just to ensure it's publishing (optional)
        self.subscription = self.create_subscription(
            Image,
            "/camera/camera/color/image_raw",
            self.image_callback,
            10,
        )

        # Service client – must match server name & type
        self.client = self.create_client(GroundingDinoPredict, "grounding_dino_predict")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting again...")

        # Publisher for annotated image
        self.publisher = self.create_publisher(Image, "/groundingdino/annotated_image", 10)

        # Timer to periodically call the service
        self.timer = self.create_timer(self.call_interval, self.timer_callback)

        self.get_logger().info("GroundingDINO Client node has been started.")

    def image_callback(self, msg: Image):
        self.last_image = msg

    def timer_callback(self):
        if self.last_image is None or self.processing:
            return

        self.processing = True
        self.get_logger().info("Calling grounding_dino_predict service...")

        request = GroundingDinoPredict.Request()
        request.prompt = self.text_prompt  # string field in the .srv

        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
            self.processing = False
            return

        self.get_logger().info("Received response from grounding_dino_predict server.")

        # --- Extract annotated image ---
        annotated_img_msg = response.result.image
        self.publisher.publish(annotated_img_msg)
        self.get_logger().info("Published annotated image to /groundingdino/annotated_image.")

        # --- Log workspace bbox ---
        ws = response.result.workspace_bbox.data
        if ws:
            self.get_logger().info(f"Workspace bbox (x_min, x_max, y_min, y_max): {list(ws)}")

        # --- Log detected objects ---
        for obj in response.result.object_position:
            # 2D box
            bbox_str = f"({obj.x_min}, {obj.y_min}) -> ({obj.x_max}, {obj.y_max})"

            # Depth
            depth_str = f"{obj.depth:.3f} m" if obj.depth > 0 else "N/A"

            # World position
            wx = obj.pose.pose.position.x
            wy = obj.pose.pose.position.y
            wz = obj.pose.pose.position.z

            self.get_logger().info(
                f"ID {obj.id} | class={obj.Class} | bbox={bbox_str} | "
                f"depth={depth_str} | world=({wx:.3f}, {wy:.3f}, {wz:.3f})"
            )

        self.processing = False

        self.last_image = msg

def main(args=None):
    rclpy.init(args=args)
    client = GroundingDINOClient()
    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
