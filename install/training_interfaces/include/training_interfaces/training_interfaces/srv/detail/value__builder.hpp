// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__SRV__DETAIL__VALUE__BUILDER_HPP_
#define TRAINING_INTERFACES__SRV__DETAIL__VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "training_interfaces/srv/detail/value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace training_interfaces
{

namespace srv
{

namespace builder
{

class Init_Value_Request_b
{
public:
  explicit Init_Value_Request_b(::training_interfaces::srv::Value_Request & msg)
  : msg_(msg)
  {}
  ::training_interfaces::srv::Value_Request b(::training_interfaces::srv::Value_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::training_interfaces::srv::Value_Request msg_;
};

class Init_Value_Request_a
{
public:
  Init_Value_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Value_Request_b a(::training_interfaces::srv::Value_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Value_Request_b(msg_);
  }

private:
  ::training_interfaces::srv::Value_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::training_interfaces::srv::Value_Request>()
{
  return training_interfaces::srv::builder::Init_Value_Request_a();
}

}  // namespace training_interfaces


namespace training_interfaces
{

namespace srv
{

namespace builder
{

class Init_Value_Response_val
{
public:
  Init_Value_Response_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::training_interfaces::srv::Value_Response val(::training_interfaces::srv::Value_Response::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::training_interfaces::srv::Value_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::training_interfaces::srv::Value_Response>()
{
  return training_interfaces::srv::builder::Init_Value_Response_val();
}

}  // namespace training_interfaces

#endif  // TRAINING_INTERFACES__SRV__DETAIL__VALUE__BUILDER_HPP_
