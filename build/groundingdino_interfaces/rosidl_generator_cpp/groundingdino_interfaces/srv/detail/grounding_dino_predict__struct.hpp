// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_HPP_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Request __attribute__((deprecated))
#else
# define DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Request __declspec(deprecated)
#endif

namespace groundingdino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroundingDinoPredict_Request_
{
  using Type = GroundingDinoPredict_Request_<ContainerAllocator>;

  explicit GroundingDinoPredict_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit GroundingDinoPredict_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Request
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Request
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundingDinoPredict_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundingDinoPredict_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundingDinoPredict_Request_

// alias to use template instance with default allocator
using GroundingDinoPredict_Request =
  groundingdino_interfaces::srv::GroundingDinoPredict_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace groundingdino_interfaces


// Include directives for member types
// Member 'result'
#include "groundingdino_interfaces/msg/detail/object_positions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Response __attribute__((deprecated))
#else
# define DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Response __declspec(deprecated)
#endif

namespace groundingdino_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroundingDinoPredict_Response_
{
  using Type = GroundingDinoPredict_Response_<ContainerAllocator>;

  explicit GroundingDinoPredict_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit GroundingDinoPredict_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const groundingdino_interfaces::msg::ObjectPositions_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Response
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__groundingdino_interfaces__srv__GroundingDinoPredict_Response
    std::shared_ptr<groundingdino_interfaces::srv::GroundingDinoPredict_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundingDinoPredict_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundingDinoPredict_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundingDinoPredict_Response_

// alias to use template instance with default allocator
using GroundingDinoPredict_Response =
  groundingdino_interfaces::srv::GroundingDinoPredict_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace groundingdino_interfaces

namespace groundingdino_interfaces
{

namespace srv
{

struct GroundingDinoPredict
{
  using Request = groundingdino_interfaces::srv::GroundingDinoPredict_Request;
  using Response = groundingdino_interfaces::srv::GroundingDinoPredict_Response;
};

}  // namespace srv

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_HPP_
