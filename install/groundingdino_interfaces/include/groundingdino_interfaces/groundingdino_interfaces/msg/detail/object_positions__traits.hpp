// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__TRAITS_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "groundingdino_interfaces/msg/detail/object_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_position'
#include "groundingdino_interfaces/msg/detail/object_position__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'workspace_bbox'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace groundingdino_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectPositions & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_position
  {
    if (msg.object_position.size() == 0) {
      out << "object_position: []";
    } else {
      out << "object_position: [";
      size_t pending_items = msg.object_position.size();
      for (auto item : msg.object_position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: workspace_bbox
  {
    out << "workspace_bbox: ";
    to_flow_style_yaml(msg.workspace_bbox, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPositions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_position.size() == 0) {
      out << "object_position: []\n";
    } else {
      out << "object_position:\n";
      for (auto item : msg.object_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: workspace_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_bbox:\n";
    to_block_style_yaml(msg.workspace_bbox, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPositions & msg, bool use_flow_style = false)
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
  const groundingdino_interfaces::msg::ObjectPositions & msg,
  std::ostream & out, size_t indentation = 0)
{
  groundingdino_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use groundingdino_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const groundingdino_interfaces::msg::ObjectPositions & msg)
{
  return groundingdino_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<groundingdino_interfaces::msg::ObjectPositions>()
{
  return "groundingdino_interfaces::msg::ObjectPositions";
}

template<>
inline const char * name<groundingdino_interfaces::msg::ObjectPositions>()
{
  return "groundingdino_interfaces/msg/ObjectPositions";
}

template<>
struct has_fixed_size<groundingdino_interfaces::msg::ObjectPositions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<groundingdino_interfaces::msg::ObjectPositions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<groundingdino_interfaces::msg::ObjectPositions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__TRAITS_HPP_
