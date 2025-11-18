cmake_minimum_required(VERSION 3.8)
project(groundingdino_interfaces)



# find dependencies
find_package(ament_cmake REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/GroundingDinoPredict.srv"
  DEPENDENCIES sensor_msgs
)

ament_export_dependencies(rosidl_default_runtime) 
ament_package()
