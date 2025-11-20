from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import yaml
import os


def generate_launch_description():
    # If you really need the venv site-packages in PYTHONPATH
    env = {
        "PYTHONPATH": "/home/sutd/gdinov2_env/lib/python3.10/site-packages:"
    }

    # Expect file at: groundingdino_server/config/handeye_extrinsics.yaml
    config_path = os.path.join(
        get_package_share_directory("groundingdino_server"),
        "config",
        "handeye_extrinsics.yaml",
    )

    with open(config_path, "r") as f:
        calib = yaml.safe_load(f)

    t = calib["transform"]["translation"]
    r = calib["transform"]["rotation"]
    parent_frame = calib["ee_frame"]       # e.g. "tool0"
    child_frame = calib["camera_frame"]    # e.g. "camera_color_optical_frame"

    # ---- Static transform publisher (tool0 -> camera_color_optical_frame) ----
    static_tf_node = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="handeye_static_tf",
        output="screen",
        arguments=[
            str(t["x"]), str(t["y"]), str(t["z"]),
            str(r["x"]), str(r["y"]), str(r["z"]), str(r["w"]),
            parent_frame,
            child_frame,
        ],
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
    ])