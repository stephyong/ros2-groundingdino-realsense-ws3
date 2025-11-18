#subscribes to receive image from topic, call service to get boxes, phrases, draw boxes on image and return
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
from groundingdino_interfaces.srv import GroundingDinoPredict

class GroundingDINOClient(Node):
    
    def __init__(self):
        super().__init__('groundingdino_client')  # node name
        #parameters
        #text prompt parameter
        self.declare_parameter("text_prompt", "blue circle")
        self.text_prompt = (
            self.get_parameter("text_prompt")
            .get_parameter_value()
            .string_value
        )
        #detection thereshold parameters
        self.box_threshold = 0.35
        self.text_threshold = 0.25
        self.call_interval = 10.0

        self.bridge = CvBridge()
        self.last_image = None
        self.processing = False

        self.subscription = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.image_callback,
            10)
        
        self.client = self.create_client(GroundingDinoPredict, 'grounding_dino_predict_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')


        self.publisher = self.create_publisher(Image, '/groundingdino/annotated_image', 10)
        self.timer = self.create_timer(self.call_interval, self.timer_callback)
        self.get_logger().info('GroundingDINO Client node has been started.')


    def image_callback(self, msg: Image):
        self.last_image = msg

    def timer_callback(self):
        if self.last_image is None or self.processing:
            return  
        self.processing = True
        self.get_logger().info('Sending image to GroundingDINO server...')
        
        request = GroundingDinoPredict.Request()
        #request parameters
        request.image = self.last_image
        request.text_prompt = self.text_prompt
        request.box_threshold = self.box_threshold
        request.text_threshold = self.text_threshold

        #actually call the service
        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')
            self.processing = False
            return

        self.get_logger().info('Received response from GroundingDINO server.')
       

        self.publisher.publish(response.annotated_image)
        self.get_logger().info('Published annotated image.')

        self.processing = False




def main(args=None):
    rclpy.init(args=args)
    client = GroundingDINOClient()
    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()