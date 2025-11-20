// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "groundingdino_interfaces/msg/detail/object_positions__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace groundingdino_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectPositions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) groundingdino_interfaces::msg::ObjectPositions(_init);
}

void ObjectPositions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<groundingdino_interfaces::msg::ObjectPositions *>(message_memory);
  typed_message->~ObjectPositions();
}

size_t size_function__ObjectPositions__object_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<groundingdino_interfaces::msg::ObjectPosition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectPositions__object_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<groundingdino_interfaces::msg::ObjectPosition> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectPositions__object_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<groundingdino_interfaces::msg::ObjectPosition> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObjectPositions__object_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const groundingdino_interfaces::msg::ObjectPosition *>(
    get_const_function__ObjectPositions__object_position(untyped_member, index));
  auto & value = *reinterpret_cast<groundingdino_interfaces::msg::ObjectPosition *>(untyped_value);
  value = item;
}

void assign_function__ObjectPositions__object_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<groundingdino_interfaces::msg::ObjectPosition *>(
    get_function__ObjectPositions__object_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const groundingdino_interfaces::msg::ObjectPosition *>(untyped_value);
  item = value;
}

void resize_function__ObjectPositions__object_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<groundingdino_interfaces::msg::ObjectPosition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectPositions_message_member_array[3] = {
  {
    "object_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<groundingdino_interfaces::msg::ObjectPosition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces::msg::ObjectPositions, object_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectPositions__object_position,  // size() function pointer
    get_const_function__ObjectPositions__object_position,  // get_const(index) function pointer
    get_function__ObjectPositions__object_position,  // get(index) function pointer
    fetch_function__ObjectPositions__object_position,  // fetch(index, &value) function pointer
    assign_function__ObjectPositions__object_position,  // assign(index, value) function pointer
    resize_function__ObjectPositions__object_position  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces::msg::ObjectPositions, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "workspace_bbox",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float32MultiArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces::msg::ObjectPositions, workspace_bbox),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectPositions_message_members = {
  "groundingdino_interfaces::msg",  // message namespace
  "ObjectPositions",  // message name
  3,  // number of fields
  sizeof(groundingdino_interfaces::msg::ObjectPositions),
  ObjectPositions_message_member_array,  // message members
  ObjectPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPositions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectPositions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectPositions_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace groundingdino_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<groundingdino_interfaces::msg::ObjectPositions>()
{
  return &::groundingdino_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectPositions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, groundingdino_interfaces, msg, ObjectPositions)() {
  return &::groundingdino_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectPositions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
