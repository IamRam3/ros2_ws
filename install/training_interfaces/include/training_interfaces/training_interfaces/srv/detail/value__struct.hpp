// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_HPP_
#define TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__training_interfaces__srv__Value_Request __attribute__((deprecated))
#else
# define DEPRECATED__training_interfaces__srv__Value_Request __declspec(deprecated)
#endif

namespace training_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Value_Request_
{
  using Type = Value_Request_<ContainerAllocator>;

  explicit Value_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  explicit Value_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    training_interfaces::srv::Value_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const training_interfaces::srv::Value_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      training_interfaces::srv::Value_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      training_interfaces::srv::Value_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__training_interfaces__srv__Value_Request
    std::shared_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__training_interfaces__srv__Value_Request
    std::shared_ptr<training_interfaces::srv::Value_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Value_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Value_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Value_Request_

// alias to use template instance with default allocator
using Value_Request =
  training_interfaces::srv::Value_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace training_interfaces


#ifndef _WIN32
# define DEPRECATED__training_interfaces__srv__Value_Response __attribute__((deprecated))
#else
# define DEPRECATED__training_interfaces__srv__Value_Response __declspec(deprecated)
#endif

namespace training_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Value_Response_
{
  using Type = Value_Response_<ContainerAllocator>;

  explicit Value_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0l;
    }
  }

  explicit Value_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0l;
    }
  }

  // field types and members
  using _val_type =
    int32_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    training_interfaces::srv::Value_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const training_interfaces::srv::Value_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      training_interfaces::srv::Value_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      training_interfaces::srv::Value_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__training_interfaces__srv__Value_Response
    std::shared_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__training_interfaces__srv__Value_Response
    std::shared_ptr<training_interfaces::srv::Value_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Value_Response_ & other) const
  {
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const Value_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Value_Response_

// alias to use template instance with default allocator
using Value_Response =
  training_interfaces::srv::Value_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace training_interfaces

namespace training_interfaces
{

namespace srv
{

struct Value
{
  using Request = training_interfaces::srv::Value_Request;
  using Response = training_interfaces::srv::Value_Response;
};

}  // namespace srv

}  // namespace training_interfaces

#endif  // TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_HPP_
