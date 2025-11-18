from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    env = {"PYTHONPATH": "/home/sutd/gdinov2_env/lib/python3.10/site-packages:"}
    return LaunchDescription([
        # RealSense camera node (standard executable)
        Node(
            package='realsense2_camera',
            executable='realsense2_camera_node',  # standard executable for this driver
            name='camera',
            output='screen',
            parameters=[{
                'color_width': 640,
                'color_height': 480,
                'color_fps': 10,
            }],
        ),
        # Grounding DINO detector node (your package)
        Node(
            package='groundingdino_ros',
            executable='camera_to_dino',  # must match the name in entry_points/console_scripts
            name='grounding_dino_node',
            output='screen',
            parameters=[{'text_prompt': 'person'}],
            
        )
    ])