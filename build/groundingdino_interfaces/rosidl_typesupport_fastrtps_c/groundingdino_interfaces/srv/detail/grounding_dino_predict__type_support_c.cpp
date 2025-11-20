// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // prompt
#include "rosidl_runtime_c/string_functions.h"  // prompt

// forward declare type support functions


using _GroundingDinoPredict_Request__ros_msg_type = groundingdino_interfaces__srv__GroundingDinoPredict_Request;

static bool _GroundingDinoPredict_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GroundingDinoPredict_Request__ros_msg_type * ros_message = static_cast<const _GroundingDinoPredict_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: prompt
  {
    const rosidl_runtime_c__String * str = &ros_message->prompt;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GroundingDinoPredict_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GroundingDinoPredict_Request__ros_msg_type * ros_message = static_cast<_GroundingDinoPredict_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: prompt
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prompt.data) {
      rosidl_runtime_c__String__init(&ros_message->prompt);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prompt,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prompt'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_groundingdino_interfaces
size_t get_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GroundingDinoPredict_Request__ros_msg_type * ros_message = static_cast<const _GroundingDinoPredict_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name prompt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prompt.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GroundingDinoPredict_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_groundingdino_interfaces
size_t max_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Request(
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

  // member: prompt
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
    using DataType = groundingdino_interfaces__srv__GroundingDinoPredict_Request;
    is_plain =
      (
      offsetof(DataType, prompt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GroundingDinoPredict_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GroundingDinoPredict_Request = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict_Request",
  _GroundingDinoPredict_Request__cdr_serialize,
  _GroundingDinoPredict_Request__cdr_deserialize,
  _GroundingDinoPredict_Request__get_serialized_size,
  _GroundingDinoPredict_Request__max_serialized_size
};

static rosidl_message_type_support_t _GroundingDinoPredict_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GroundingDinoPredict_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, srv, GroundingDinoPredict_Request)() {
  return &_GroundingDinoPredict_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "groundingdino_interfaces/msg/detail/object_positions__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_groundingdino_interfaces__msg__ObjectPositions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_groundingdino_interfaces__msg__ObjectPositions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, msg, ObjectPositions)();


using _GroundingDinoPredict_Response__ros_msg_type = groundingdino_interfaces__srv__GroundingDinoPredict_Response;

static bool _GroundingDinoPredict_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GroundingDinoPredict_Response__ros_msg_type * ros_message = static_cast<const _GroundingDinoPredict_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, groundingdino_interfaces, msg, ObjectPositions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GroundingDinoPredict_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GroundingDinoPredict_Response__ros_msg_type * ros_message = static_cast<_GroundingDinoPredict_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, groundingdino_interfaces, msg, ObjectPositions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_groundingdino_interfaces
size_t get_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GroundingDinoPredict_Response__ros_msg_type * ros_message = static_cast<const _GroundingDinoPredict_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_groundingdino_interfaces__msg__ObjectPositions(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GroundingDinoPredict_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_groundingdino_interfaces
size_t max_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Response(
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

  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_groundingdino_interfaces__msg__ObjectPositions(
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
    using DataType = groundingdino_interfaces__srv__GroundingDinoPredict_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GroundingDinoPredict_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_groundingdino_interfaces__srv__GroundingDinoPredict_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GroundingDinoPredict_Response = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict_Response",
  _GroundingDinoPredict_Response__cdr_serialize,
  _GroundingDinoPredict_Response__cdr_deserialize,
  _GroundingDinoPredict_Response__get_serialized_size,
  _GroundingDinoPredict_Response__max_serialized_size
};

static rosidl_message_type_support_t _GroundingDinoPredict_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GroundingDinoPredict_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, srv, GroundingDinoPredict_Response)() {
  return &_GroundingDinoPredict_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "groundingdino_interfaces/srv/grounding_dino_predict.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GroundingDinoPredict__callbacks = {
  "groundingdino_interfaces::srv",
  "GroundingDinoPredict",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, srv, GroundingDinoPredict_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, srv, GroundingDinoPredict_Response)(),
};

static rosidl_service_type_support_t GroundingDinoPredict__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GroundingDinoPredict__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, groundingdino_interfaces, srv, GroundingDinoPredict)() {
  return &GroundingDinoPredict__handle;
}

#if defined(__cplusplus)
}
#endif
