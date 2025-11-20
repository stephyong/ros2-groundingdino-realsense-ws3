// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "groundingdino_interfaces/msg/detail/object_positions__rosidl_typesupport_introspection_c.h"
#include "groundingdino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "groundingdino_interfaces/msg/detail/object_positions__functions.h"
#include "groundingdino_interfaces/msg/detail/object_positions__struct.h"


// Include directives for member types
// Member `object_position`
#include "groundingdino_interfaces/msg/object_position.h"
// Member `object_position`
#include "groundingdino_interfaces/msg/detail/object_position__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `workspace_bbox`
#include "std_msgs/msg/float32_multi_array.h"
// Member `workspace_bbox`
#include "std_msgs/msg/detail/float32_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  groundingdino_interfaces__msg__ObjectPositions__init(message_memory);
}

void groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_fini_function(void * message_memory)
{
  groundingdino_interfaces__msg__ObjectPositions__fini(message_memory);
}

size_t groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__size_function__ObjectPositions__object_position(
  const void * untyped_member)
{
  const groundingdino_interfaces__msg__ObjectPosition__Sequence * member =
    (const groundingdino_interfaces__msg__ObjectPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_const_function__ObjectPositions__object_position(
  const void * untyped_member, size_t index)
{
  const groundingdino_interfaces__msg__ObjectPosition__Sequence * member =
    (const groundingdino_interfaces__msg__ObjectPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_function__ObjectPositions__object_position(
  void * untyped_member, size_t index)
{
  groundingdino_interfaces__msg__ObjectPosition__Sequence * member =
    (groundingdino_interfaces__msg__ObjectPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__fetch_function__ObjectPositions__object_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const groundingdino_interfaces__msg__ObjectPosition * item =
    ((const groundingdino_interfaces__msg__ObjectPosition *)
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_const_function__ObjectPositions__object_position(untyped_member, index));
  groundingdino_interfaces__msg__ObjectPosition * value =
    (groundingdino_interfaces__msg__ObjectPosition *)(untyped_value);
  *value = *item;
}

void groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__assign_function__ObjectPositions__object_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  groundingdino_interfaces__msg__ObjectPosition * item =
    ((groundingdino_interfaces__msg__ObjectPosition *)
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_function__ObjectPositions__object_position(untyped_member, index));
  const groundingdino_interfaces__msg__ObjectPosition * value =
    (const groundingdino_interfaces__msg__ObjectPosition *)(untyped_value);
  *item = *value;
}

bool groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__resize_function__ObjectPositions__object_position(
  void * untyped_member, size_t size)
{
  groundingdino_interfaces__msg__ObjectPosition__Sequence * member =
    (groundingdino_interfaces__msg__ObjectPosition__Sequence *)(untyped_member);
  groundingdino_interfaces__msg__ObjectPosition__Sequence__fini(member);
  return groundingdino_interfaces__msg__ObjectPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_member_array[3] = {
  {
    "object_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces__msg__ObjectPositions, object_position),  // bytes offset in struct
    NULL,  // default value
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__size_function__ObjectPositions__object_position,  // size() function pointer
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_const_function__ObjectPositions__object_position,  // get_const(index) function pointer
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__get_function__ObjectPositions__object_position,  // get(index) function pointer
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__fetch_function__ObjectPositions__object_position,  // fetch(index, &value) function pointer
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__assign_function__ObjectPositions__object_position,  // assign(index, value) function pointer
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__resize_function__ObjectPositions__object_position  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces__msg__ObjectPositions, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "workspace_bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces__msg__ObjectPositions, workspace_bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_members = {
  "groundingdino_interfaces__msg",  // message namespace
  "ObjectPositions",  // message name
  3,  // number of fields
  sizeof(groundingdino_interfaces__msg__ObjectPositions),
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_member_array,  // message members
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_type_support_handle = {
  0,
  &groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_groundingdino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, msg, ObjectPositions)() {
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, msg, ObjectPosition)();
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32MultiArray)();
  if (!groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_type_support_handle.typesupport_identifier) {
    groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &groundingdino_interfaces__msg__ObjectPositions__rosidl_typesupport_introspection_c__ObjectPositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
