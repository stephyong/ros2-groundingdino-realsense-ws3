// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__TRAITS_HPP_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace groundingdino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroundingDinoPredict_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroundingDinoPredict_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundingDinoPredict_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use groundingdino_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  groundingdino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use groundingdino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const groundingdino_interfaces::srv::GroundingDinoPredict_Request & msg)
{
  return groundingdino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<groundingdino_interfaces::srv::GroundingDinoPredict_Request>()
{
  return "groundingdino_interfaces::srv::GroundingDinoPredict_Request";
}

template<>
inline const char * name<groundingdino_interfaces::srv::GroundingDinoPredict_Request>()
{
  return "groundingdino_interfaces/srv/GroundingDinoPredict_Request";
}

template<>
struct has_fixed_size<groundingdino_interfaces::srv::GroundingDinoPredict_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<groundingdino_interfaces::srv::GroundingDinoPredict_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<groundingdino_interfaces::srv::GroundingDinoPredict_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "groundingdino_interfaces/msg/detail/object_positions__traits.hpp"

namespace groundingdino_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GroundingDinoPredict_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroundingDinoPredict_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundingDinoPredict_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use groundingdino_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  groundingdino_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use groundingdino_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const groundingdino_interfaces::srv::GroundingDinoPredict_Response & msg)
{
  return groundingdino_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<groundingdino_interfaces::srv::GroundingDinoPredict_Response>()
{
  return "groundingdino_interfaces::srv::GroundingDinoPredict_Response";
}

template<>
inline const char * name<groundingdino_interfaces::srv::GroundingDinoPredict_Response>()
{
  return "groundingdino_interfaces/srv/GroundingDinoPredict_Response";
}

template<>
struct has_fixed_size<groundingdino_interfaces::srv::GroundingDinoPredict_Response>
  : std::integral_constant<bool, has_fixed_size<groundingdino_interfaces::msg::ObjectPositions>::value> {};

template<>
struct has_bounded_size<groundingdino_interfaces::srv::GroundingDinoPredict_Response>
  : std::integral_constant<bool, has_bounded_size<groundingdino_interfaces::msg::ObjectPositions>::value> {};

template<>
struct is_message<groundingdino_interfaces::srv::GroundingDinoPredict_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<groundingdino_interfaces::srv::GroundingDinoPredict>()
{
  return "groundingdino_interfaces::srv::GroundingDinoPredict";
}

template<>
inline const char * name<groundingdino_interfaces::srv::GroundingDinoPredict>()
{
  return "groundingdino_interfaces/srv/GroundingDinoPredict";
}

template<>
struct has_fixed_size<groundingdino_interfaces::srv::GroundingDinoPredict>
  : std::integral_constant<
    bool,
    has_fixed_size<groundingdino_interfaces::srv::GroundingDinoPredict_Request>::value &&
    has_fixed_size<groundingdino_interfaces::srv::GroundingDinoPredict_Response>::value
  >
{
};

template<>
struct has_bounded_size<groundingdino_interfaces::srv::GroundingDinoPredict>
  : std::integral_constant<
    bool,
    has_bounded_size<groundingdino_interfaces::srv::GroundingDinoPredict_Request>::value &&
    has_bounded_size<groundingdino_interfaces::srv::GroundingDinoPredict_Response>::value
  >
{
};

template<>
struct is_service<groundingdino_interfaces::srv::GroundingDinoPredict>
  : std::true_type
{
};

template<>
struct is_service_request<groundingdino_interfaces::srv::GroundingDinoPredict_Request>
  : std::true_type
{
};

template<>
struct is_service_response<groundingdino_interfaces::srv::GroundingDinoPredict_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__TRAITS_HPP_
