// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_HPP_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'object_position'
#include "groundingdino_interfaces/msg/detail/object_position__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'workspace_bbox'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__groundingdino_interfaces__msg__ObjectPositions __attribute__((deprecated))
#else
# define DEPRECATED__groundingdino_interfaces__msg__ObjectPositions __declspec(deprecated)
#endif

namespace groundingdino_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectPositions_
{
  using Type = ObjectPositions_<ContainerAllocator>;

  explicit ObjectPositions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    workspace_bbox(_init)
  {
    (void)_init;
  }

  explicit ObjectPositions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    workspace_bbox(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_position_type =
    std::vector<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>>;
  _object_position_type object_position;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _workspace_bbox_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _workspace_bbox_type workspace_bbox;

  // setters for named parameter idiom
  Type & set__object_position(
    const std::vector<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<groundingdino_interfaces::msg::ObjectPosition_<ContainerAllocator>>> & _arg)
  {
    this->object_position = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__workspace_bbox(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->workspace_bbox = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__groundingdino_interfaces__msg__ObjectPositions
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__groundingdino_interfaces__msg__ObjectPositions
    std::shared_ptr<groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPositions_ & other) const
  {
    if (this->object_position != other.object_position) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->workspace_bbox != other.workspace_bbox) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPositions_

// alias to use template instance with default allocator
using ObjectPositions =
  groundingdino_interfaces::msg::ObjectPositions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_HPP_
