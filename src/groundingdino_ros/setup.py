from setuptools import setup, find_packages

package_name = 'groundingdino_ros'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch',
         ['launch/groundingdino_pipeline.launch.py']),
    ],
    install_requires=[
        'setuptools',
        'rclpy',
        'opencv-python',
        'numpy',
        'torch',
        'groundingdino',   # the actual model library
    ],
    zip_safe=False,
    maintainer='sutd',
    maintainer_email='steph27041@gmail.com',
    description='GroundingDINO ROS2 wrapper node',
    license='TODO: License declaration',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            # maps ROS2 executable name -> Python function
            # Node(executable='camera_to_dino', package='groundingdino_wrapper')
            'camera_to_dino = groundingdino_ros.camera_to_dino:main',
        ],
    },
)