from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    env = {"PYTHONPATH": "/home/sutd/gdinov2_env/lib/python3.10/site-packages:"}
    return LaunchDescription([
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

    Node(
        package='groundingdino_server',
        executable='server_executable',
        name='groundingdino_server_node',
        output='screen'
    ),

    Node(
        package='groundingdino_client',
        executable='groundingdino_client_executable',
        name='groundingdino_client_node',
        output='screen',
        parameters=[{'text_prompt': 'eye'}]
    )

    ])

    