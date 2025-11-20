// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_point'
// Member 'camera_xy_min'
// Member 'camera_xy_max'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__groundingdino_interfaces__msg__ObjectPosition __attribute__((deprecated))
#else
# define DEPRECATED__groundingdino_interfaces__msg__ObjectPosition __declspec(deprecated)
#endif

namespace groundingdino_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectPosition_
{
  using Type = ObjectPosition_<ContainerAllocator>;

  explicit ObjectPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_point(_init),
    pose(_init),
    camera_xy_min(_init),
    camera_xy_max(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->class_label = "";
      this->x_min = 0l;
      this->y_min = 0l;
      this->x_max = 0l;
      this->y_max = 0l;
      this->depth = 0.0f;
    }
  }

  explicit ObjectPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_label(_alloc),
    camera_point(_alloc, _init),
    pose(_alloc, _init),
    camera_xy_min(_alloc, _init),
    camera_xy_max(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->class_label = "";
      this->x_min = 0l;
      this->y_min = 0l;
      this->x_max = 0l;
      this->y_max = 0l;
      this->depth = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _class_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_label_type class_label;
  using _x_min_type =
    int32_t;
  _x_min_type x_min;
  using _y_min_type =
    int32_t;
  _y_min_type y_min;
  using _x_max_type =
    int32_t;
  _x_max_type x_max;
  using _y_max_type =
    int32_t;
  _y_max_type y_max;
  using _depth_type =
    float;
  _depth_type depth;
  using _camera_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _camera_point_type camera_point;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _camera_xy_min_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _camera_xy_min_type camera_xy_min;
  using _camera_xy_max_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _camera_xy_max_type camera_xy_max;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__class_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_label = _arg;
    return *this;
  }
  Type & set__x_min(
    const int32_t & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__y_min(
    const int32_t & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const int32_t & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_max(
    const int32_t & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__camera_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->camera_point = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__camera_xy_min(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->camera_xy_min = _arg;
    return *this;
  }
  Type & set__camera_xy_max(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->camera_xy_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__groundingdino_interfaces__msg__ObjectPosition
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__groundingdino_interfaces__msg__ObjectPosition
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPosition_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->class_label != other.class_label) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->camera_point != other.camera_point) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->camera_xy_min != other.camera_xy_min) {
      return false;
    }
    if (this->camera_xy_max != other.camera_xy_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPosition_

// alias to use template instance with default allocator
using ObjectPosition =
  groundingdino_interfaces::msg::ObjectPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_HPP_
