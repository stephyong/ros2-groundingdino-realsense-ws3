// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace groundingdino_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_serialize(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  groundingdino_interfaces::srv::GroundingDinoPredict_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
get_serialized_size(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
max_serialized_size_GroundingDinoPredict_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace groundingdino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace groundingdino_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_serialize(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  groundingdino_interfaces::srv::GroundingDinoPredict_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
get_serialized_size(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
max_serialized_size_GroundingDinoPredict_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace groundingdino_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict)();

#ifdef __cplusplus
}
#endif

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
