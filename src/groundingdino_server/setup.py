from setuptools import find_packages, setup

package_name = 'groundingdino_server'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),

        # Install launch file
        ('share/' + package_name + '/launch', [
            'launch/groundingdino_svccli.launch.py'
        ]),

        # Install config folder for hand-eye calibration
        ('share/' + package_name + '/config', [
            'config/handeye_extrinsics.yaml'
        ]),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sutd',
    maintainer_email='steph27041@gmail.com',
    description='GroundingDINO server providing bounding box + 3D deprojection',
    license='TODO: License declaration',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            'server_executable = groundingdino_server.groundingdino_server:main',
        ],
    },
)