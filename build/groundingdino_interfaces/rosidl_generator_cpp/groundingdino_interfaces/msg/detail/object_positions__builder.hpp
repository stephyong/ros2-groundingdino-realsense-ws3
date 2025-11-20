// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__BUILDER_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "groundingdino_interfaces/msg/detail/object_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace groundingdino_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectPositions_workspace_bbox
{
public:
  explicit Init_ObjectPositions_workspace_bbox(::groundingdino_interfaces::msg::ObjectPositions & msg)
  : msg_(msg)
  {}
  ::groundingdino_interfaces::msg::ObjectPositions workspace_bbox(::groundingdino_interfaces::msg::ObjectPositions::_workspace_bbox_type arg)
  {
    msg_.workspace_bbox = std::move(arg);
    return std::move(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPositions msg_;
};

class Init_ObjectPositions_image
{
public:
  explicit Init_ObjectPositions_image(::groundingdino_interfaces::msg::ObjectPositions & msg)
  : msg_(msg)
  {}
  Init_ObjectPositions_workspace_bbox image(::groundingdino_interfaces::msg::ObjectPositions::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ObjectPositions_workspace_bbox(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPositions msg_;
};

class Init_ObjectPositions_object_position
{
public:
  Init_ObjectPositions_object_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPositions_image object_position(::groundingdino_interfaces::msg::ObjectPositions::_object_position_type arg)
  {
    msg_.object_position = std::move(arg);
    return Init_ObjectPositions_image(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::groundingdino_interfaces::msg::ObjectPositions>()
{
  return groundingdino_interfaces::msg::builder::Init_ObjectPositions_object_position();
}

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__BUILDER_HPP_
