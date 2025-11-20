from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription
import os


def generate_launch_description():
    # If you really need the venv site-packages in PYTHONPATH
    env = {
        "PYTHONPATH": "/home/sutd/gdinov2_env/lib/python3.10/site-packages:"
    }

    calibration_launch_path = os.path.join(
        get_package_share_directory('groundingdino_client'),
        'launch/left_camera_right_wrist_3_link_calibration.launch.py'
    )
    calibration = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(calibration_launch_path)
    )
    groundingdino_server_node = Node(
        package="groundingdino_server",
        executable="server_executable",          # must match your console_scripts entry
        name="groundingdino_server_node",
        output="screen",
        env=env,                                  # give it the venv PYTHONPATH
    )

    groundingdino_client_node = Node(
        package="groundingdino_client",
        executable="groundingdino_client_executable",  # must match console_scripts
        name="groundingdino_client_node",
        output="screen",
        parameters=[{
            "text_prompt": "blue_circle.red_hexagon.green_circle"
        }],
    )

    return LaunchDescription([
        groundingdino_server_node,
        groundingdino_client_node,
        calibration
    ])