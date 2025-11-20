// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__rosidl_typesupport_fastrtps_cpp.hpp"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: prompt
  cdr << ros_message.prompt;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  groundingdino_interfaces::srv::GroundingDinoPredict_Request & ros_message)
{
  // Member: prompt
  cdr >> ros_message.prompt;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
get_serialized_size(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: prompt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.prompt.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
max_serialized_size_GroundingDinoPredict_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: prompt
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = groundingdino_interfaces::srv::GroundingDinoPredict_Request;
    is_plain =
      (
      offsetof(DataType, prompt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GroundingDinoPredict_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const groundingdino_interfaces::srv::GroundingDinoPredict_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GroundingDinoPredict_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<groundingdino_interfaces::srv::GroundingDinoPredict_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GroundingDinoPredict_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const groundingdino_interfaces::srv::GroundingDinoPredict_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GroundingDinoPredict_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GroundingDinoPredict_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GroundingDinoPredict_Request__callbacks = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict_Request",
  _GroundingDinoPredict_Request__cdr_serialize,
  _GroundingDinoPredict_Request__cdr_deserialize,
  _GroundingDinoPredict_Request__get_serialized_size,
  _GroundingDinoPredict_Request__max_serialized_size
};

static rosidl_message_type_support_t _GroundingDinoPredict_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GroundingDinoPredict_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_groundingdino_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<groundingdino_interfaces::srv::GroundingDinoPredict_Request>()
{
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Request)() {
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace groundingdino_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const groundingdino_interfaces::msg::ObjectPositions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  groundingdino_interfaces::msg::ObjectPositions &);
size_t get_serialized_size(
  const groundingdino_interfaces::msg::ObjectPositions &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectPositions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace groundingdino_interfaces


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  groundingdino_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  groundingdino_interfaces::srv::GroundingDinoPredict_Response & ros_message)
{
  // Member: result
  groundingdino_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
get_serialized_size(
  const groundingdino_interfaces::srv::GroundingDinoPredict_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result

  current_alignment +=
    groundingdino_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_groundingdino_interfaces
max_serialized_size_GroundingDinoPredict_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        groundingdino_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectPositions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = groundingdino_interfaces::srv::GroundingDinoPredict_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GroundingDinoPredict_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const groundingdino_interfaces::srv::GroundingDinoPredict_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GroundingDinoPredict_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<groundingdino_interfaces::srv::GroundingDinoPredict_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GroundingDinoPredict_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const groundingdino_interfaces::srv::GroundingDinoPredict_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GroundingDinoPredict_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GroundingDinoPredict_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GroundingDinoPredict_Response__callbacks = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict_Response",
  _GroundingDinoPredict_Response__cdr_serialize,
  _GroundingDinoPredict_Response__cdr_deserialize,
  _GroundingDinoPredict_Response__get_serialized_size,
  _GroundingDinoPredict_Response__max_serialized_size
};

static rosidl_message_type_support_t _GroundingDinoPredict_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GroundingDinoPredict_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_groundingdino_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<groundingdino_interfaces::srv::GroundingDinoPredict_Response>()
{
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Response)() {
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace groundingdino_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GroundingDinoPredict__callbacks = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict_Response)(),
};

static rosidl_service_type_support_t _GroundingDinoPredict__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GroundingDinoPredict__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_groundingdino_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<groundingdino_interfaces::srv::GroundingDinoPredict>()
{
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, groundingdino_interfaces, srv, GroundingDinoPredict)() {
  return &groundingdino_interfaces::srv::typesupport_fastrtps_cpp::_GroundingDinoPredict__handle;
}

#ifdef __cplusplus
}
#endif
