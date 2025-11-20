from setuptools import find_packages, setup

package_name = 'groundingdino_client'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),

        ('share/' + package_name + ['package.xml']),

        ('share/' + package_name + '/launch', 
         ['launch/dual_arm_workcell_bringup.launch.py']),
        ('share/' + package_name + '/launch', 
         ['launch/groundingdino_svccli.launch.py']),
        ('share/' + package_name + '/launch', 
         ['launch/left_camera_left_wrist_3_link_calibration.launch.py']),
        ('share/' + package_name + '/launch', 
         ['launch/right_camera_left_wrist_3_link_calibration.launch.py']),
        ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sutd',
    maintainer_email='steph27041@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'groundingdino_client_executable = groundingdino_client.groundingdino_client:main'
        ],
    },
)
