// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__BUILDER_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "groundingdino_interfaces/msg/detail/object_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace groundingdino_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectPosition_camera_xy_max
{
public:
  explicit Init_ObjectPosition_camera_xy_max(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  ::groundingdino_interfaces::msg::ObjectPosition camera_xy_max(::groundingdino_interfaces::msg::ObjectPosition::_camera_xy_max_type arg)
  {
    msg_.camera_xy_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_camera_xy_min
{
public:
  explicit Init_ObjectPosition_camera_xy_min(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_camera_xy_max camera_xy_min(::groundingdino_interfaces::msg::ObjectPosition::_camera_xy_min_type arg)
  {
    msg_.camera_xy_min = std::move(arg);
    return Init_ObjectPosition_camera_xy_max(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_pose
{
public:
  explicit Init_ObjectPosition_pose(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_camera_xy_min pose(::groundingdino_interfaces::msg::ObjectPosition::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObjectPosition_camera_xy_min(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_camera_point
{
public:
  explicit Init_ObjectPosition_camera_point(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_pose camera_point(::groundingdino_interfaces::msg::ObjectPosition::_camera_point_type arg)
  {
    msg_.camera_point = std::move(arg);
    return Init_ObjectPosition_pose(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_depth
{
public:
  explicit Init_ObjectPosition_depth(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_camera_point depth(::groundingdino_interfaces::msg::ObjectPosition::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_ObjectPosition_camera_point(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_y_max
{
public:
  explicit Init_ObjectPosition_y_max(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_depth y_max(::groundingdino_interfaces::msg::ObjectPosition::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_ObjectPosition_depth(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_x_max
{
public:
  explicit Init_ObjectPosition_x_max(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_y_max x_max(::groundingdino_interfaces::msg::ObjectPosition::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_ObjectPosition_y_max(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_y_min
{
public:
  explicit Init_ObjectPosition_y_min(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_x_max y_min(::groundingdino_interfaces::msg::ObjectPosition::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_ObjectPosition_x_max(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_x_min
{
public:
  explicit Init_ObjectPosition_x_min(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_y_min x_min(::groundingdino_interfaces::msg::ObjectPosition::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_ObjectPosition_y_min(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_class_label
{
public:
  explicit Init_ObjectPosition_class_label(::groundingdino_interfaces::msg::ObjectPosition & msg)
  : msg_(msg)
  {}
  Init_ObjectPosition_x_min class_label(::groundingdino_interfaces::msg::ObjectPosition::_class_label_type arg)
  {
    msg_.class_label = std::move(arg);
    return Init_ObjectPosition_x_min(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

class Init_ObjectPosition_id
{
public:
  Init_ObjectPosition_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPosition_class_label id(::groundingdino_interfaces::msg::ObjectPosition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectPosition_class_label(msg_);
  }

private:
  ::groundingdino_interfaces::msg::ObjectPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::groundingdino_interfaces::msg::ObjectPosition>()
{
  return groundingdino_interfaces::msg::builder::Init_ObjectPosition_id();
}

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__BUILDER_HPP_
