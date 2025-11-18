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
import numpy as np
import torch
from torchvision.ops import box_convert

# --- Make sure Python can see the GroundingDINO repo (optional once installed via pip) ---
REPO_PATH = "/home/sutd/GroundingDINO"
if os.path.isdir(REPO_PATH) and REPO_PATH not in sys.path:
    sys.path.insert(0, REPO_PATH)

from groundingdino.util.inference import load_model, predict


class DinoDetector(Node):
    def __init__(self):
        super().__init__("grounding_dino_node")

        self.device = "cuda" if torch.cuda.is_available() else "cpu"
        self.get_logger().info(f"Using device: {self.device}")

        self.bridge = CvBridge()

        # Subscription
        self.subscription = self.create_subscription(
            Image,
            "/camera/camera/color/image_raw",  # you can remap in launch if needed
            self.image_callback,
            10,
        )

        # Publisher
        self.publisher = self.create_publisher(
            Image,
            "/grounding_dino/annotated_image",
            10,
        )

        # Load model
        config_path = "/home/sutd/GroundingDINO/groundingdino/config/GroundingDINO_SwinT_OGC.py"
        weights_path = "/home/sutd/GroundingDINO/weights/groundingdino_swint_ogc.pth"

        self.model = load_model(config_path, weights_path)
        self.model.to(self.device)
        self.model.eval()

        # Text prompt parameter
        self.declare_parameter("text_prompt", "blue circle")
        self.text_prompt = (
            self.get_parameter("text_prompt")
            .get_parameter_value()
            .string_value
        )

        self.get_logger().info(f"GroundingDINO model loaded. Prompt: {self.text_prompt}")

        # Detection thresholds
        self.box_threshold = 0.35
        self.text_threshold = 0.25

    def image_callback(self, msg: Image):
        self.get_logger().info(f"Received image for processing, height: {msg.height}, width: {msg.width}, encoding: {msg.encoding}")
        try:
            # ROS Image -> OpenCV BGR
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        except Exception as e:
            self.get_logger().error(f"Error converting ROS Image to OpenCV: {e}")
            return

        # BGR -> RGB
        rgb_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)

        # HWC (np) -> CHW (torch), no batch dim
        image_tensor = (
            torch.from_numpy(rgb_image)
            .permute(2, 0, 1)  # (H, W, C) -> (C, H, W)
            .float()
            / 255.0
        ).to(self.device)

        with torch.no_grad():
            boxes, logits, phrases = predict(
                model=self.model,
                image=image_tensor,   # (C, H, W)
                caption=self.text_prompt,
                box_threshold=self.box_threshold,
                text_threshold=self.text_threshold,
                device=self.device,
            )
            self.get_logger().info(f"Predicted boxes: {boxes}")
            self.get_logger().info(f"Predicted phrases: {phrases}")
                # After: boxes, logits, phrases = predict(...)

        if boxes is None or len(boxes) == 0:
            self.get_logger().info("No detections, skipping draw.")
            return

        # Make sure boxes is a tensor
        if not isinstance(boxes, torch.Tensor):
            boxes = torch.as_tensor(boxes)

        # Scale from [0,1] (cx, cy, w, h) to pixel coordinates
        h, w, _ = cv_image.shape
        boxes_cxcywh = boxes * torch.tensor([w, h, w, h], device=boxes.device)

        # Convert (cx, cy, w, h) -> (x_min, y_min, x_max, y_max)
        boxes_xyxy = box_convert(
            boxes=boxes_cxcywh,
            in_fmt="cxcywh",
            out_fmt="xyxy",
        ).cpu().numpy().astype(int)

        # Optional debug
        self.get_logger().info(f"Boxes (xyxy, px): {boxes_xyxy}")

        # Draw detections
        for (x_min, y_min, x_max, y_max), phrase in zip(boxes_xyxy, phrases):
            cv2.rectangle(cv_image, (x_min, y_min), (x_max, y_max), (0, 255, 0), 2)
            cv2.putText(
                cv_image,
                phrase,
                (x_min, max(0, y_min - 10)),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.5,
                (255, 255, 255),
                1,
            )

        # Back to ROS Image
        out_msg = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        self.publisher.publish(out_msg)


def main(args=None):
    rclpy.init(args=args)
    node = DinoDetector()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()