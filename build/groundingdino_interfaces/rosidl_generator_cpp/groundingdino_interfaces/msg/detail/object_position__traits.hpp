// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "groundingdino_interfaces/msg/detail/object_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_point'
// Member 'camera_xy_min'
// Member 'camera_xy_max'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace groundingdino_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: class_label
  {
    out << "class_label: ";
    rosidl_generator_traits::value_to_yaml(msg.class_label, out);
    out << ", ";
  }

  // member: x_min
  {
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << ", ";
  }

  // member: y_min
  {
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << ", ";
  }

  // member: x_max
  {
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << ", ";
  }

  // member: y_max
  {
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: camera_point
  {
    out << "camera_point: ";
    to_flow_style_yaml(msg.camera_point, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: camera_xy_min
  {
    out << "camera_xy_min: ";
    to_flow_style_yaml(msg.camera_xy_min, out);
    out << ", ";
  }

  // member: camera_xy_max
  {
    out << "camera_xy_max: ";
    to_flow_style_yaml(msg.camera_xy_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: class_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_label: ";
    rosidl_generator_traits::value_to_yaml(msg.class_label, out);
    out << "\n";
  }

  // member: x_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << "\n";
  }

  // member: y_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << "\n";
  }

  // member: x_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << "\n";
  }

  // member: y_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: camera_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_point:\n";
    to_block_style_yaml(msg.camera_point, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: camera_xy_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_xy_min:\n";
    to_block_style_yaml(msg.camera_xy_min, out, indentation + 2);
  }

  // member: camera_xy_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_xy_max:\n";
    to_block_style_yaml(msg.camera_xy_max, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace groundingdino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use groundingdino_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const groundingdino_interfaces::msg::ObjectPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  groundingdino_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use groundingdino_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const groundingdino_interfaces::msg::ObjectPosition & msg)
{
  return groundingdino_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<groundingdino_interfaces::msg::ObjectPosition>()
{
  return "groundingdino_interfaces::msg::ObjectPosition";
}

template<>
inline const char * name<groundingdino_interfaces::msg::ObjectPosition>()
{
  return "groundingdino_interfaces/msg/ObjectPosition";
}

template<>
struct has_fixed_size<groundingdino_interfaces::msg::ObjectPosition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<groundingdino_interfaces::msg::ObjectPosition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<groundingdino_interfaces::msg::ObjectPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_
