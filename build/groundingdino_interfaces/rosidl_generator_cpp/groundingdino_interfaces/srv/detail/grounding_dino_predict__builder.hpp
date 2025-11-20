// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__BUILDER_HPP_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace groundingdino_interfaces
{

namespace srv
{

namespace builder
{

class Init_GroundingDinoPredict_Request_prompt
{
public:
  Init_GroundingDinoPredict_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::groundingdino_interfaces::srv::GroundingDinoPredict_Request prompt(::groundingdino_interfaces::srv::GroundingDinoPredict_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::groundingdino_interfaces::srv::GroundingDinoPredict_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::groundingdino_interfaces::srv::GroundingDinoPredict_Request>()
{
  return groundingdino_interfaces::srv::builder::Init_GroundingDinoPredict_Request_prompt();
}

}  // namespace groundingdino_interfaces


namespace groundingdino_interfaces
{

namespace srv
{

namespace builder
{

class Init_GroundingDinoPredict_Response_result
{
public:
  Init_GroundingDinoPredict_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::groundingdino_interfaces::srv::GroundingDinoPredict_Response result(::groundingdino_interfaces::srv::GroundingDinoPredict_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::groundingdino_interfaces::srv::GroundingDinoPredict_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::groundingdino_interfaces::srv::GroundingDinoPredict_Response>()
{
  return groundingdino_interfaces::srv::builder::Init_GroundingDinoPredict_Response_result();
}

}  // namespace groundingdino_interfaces

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__BUILDER_HPP_
