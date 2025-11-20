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

from groundingdino_interfaces.msg import ObjectPosition, ObjectPositions
from groundingdino_interfaces.srv import GroundingDinoPredict


class GroundingDINOClient(Node):

    def __init__(self):
        super().__init__("groundingdino_client")

        # Parameter: what to detect
        self.declare_parameter("text_prompt", "blue circle")
        self.text_prompt = (
            self.get_parameter("text_prompt").get_parameter_value().string_value
        )

        # Call interval
        self.call_interval = 5.0

        self.bridge = CvBridge()
        self.last_image = None
        self.processing = False

        # Subscribe to right camera
        self.subscription = self.create_subscription(
            Image,
            "/right_camera/color/image_raw",   # FIXED TOPIC
            self.image_callback,
            10,
        )

        # Service client
        self.client = self.create_client(GroundingDinoPredict, "grounding_dino_predict")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Service not available, waiting again...")

        # Where to publish annotated images
        self.publisher = self.create_publisher(
            Image, "/groundingdino/annotated_image", 10
        )

        # Timer to call service
        self.timer = self.create_timer(self.call_interval, self.timer_callback)

        self.get_logger().info("GroundingDINO Client node started.")

    def image_callback(self, msg: Image):
        self.last_image = msg

    def timer_callback(self):
        if self.last_image is None or self.processing:
            return

        self.processing = True
        self.get_logger().info("Calling grounding_dino_predict service...")

        request = GroundingDinoPredict.Request()
        request.prompt = self.text_prompt

        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
            self.processing = False
            return

        self.get_logger().info("Received response.")

        # Publish annotated image
        annotated_msg = response.result.image
        self.publisher.publish(annotated_msg)
        self.get_logger().info("Published annotated image.")

        # Print workspace bbox
        ws = response.result.workspace_bbox.data
        self.get_logger().info(f"Workspace bbox: {list(ws)}")

        # Print detections
        for obj in response.result.object_position:
            bbox = f"({obj.x_min}, {obj.y_min}) -> ({obj.x_max}, {obj.y_max})"
            depth = f"{obj.depth:.3f}m" if obj.depth > 0 else "N/A"

            if obj.pose:
                wx = obj.pose.pose.position.x
                wy = obj.pose.pose.position.y
                wz = obj.pose.pose.position.z
                wpos = f"({wx:.3f}, {wy:.3f}, {wz:.3f})"
            else:
                wpos = "(nan, nan, nan)"

            self.get_logger().info(
                f"[ID {obj.id}] class={obj.class_label} | bbox={bbox} | depth={depth} | world={wpos}"
            )

        self.processing = False


def main(args=None):
    rclpy.init(args=args)
    node = GroundingDINOClient()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
