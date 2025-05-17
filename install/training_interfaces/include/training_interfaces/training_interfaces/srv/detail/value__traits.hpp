// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__SRV__DETAIL__VALUE__TRAITS_HPP_
#define TRAINING_INTERFACES__SRV__DETAIL__VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "training_interfaces/srv/detail/value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace training_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Value_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Value_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Value_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace training_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use training_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const training_interfaces::srv::Value_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  training_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use training_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const training_interfaces::srv::Value_Request & msg)
{
  return training_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<training_interfaces::srv::Value_Request>()
{
  return "training_interfaces::srv::Value_Request";
}

template<>
inline const char * name<training_interfaces::srv::Value_Request>()
{
  return "training_interfaces/srv/Value_Request";
}

template<>
struct has_fixed_size<training_interfaces::srv::Value_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<training_interfaces::srv::Value_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<training_interfaces::srv::Value_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace training_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Value_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Value_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Value_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace training_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use training_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const training_interfaces::srv::Value_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  training_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use training_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const training_interfaces::srv::Value_Response & msg)
{
  return training_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<training_interfaces::srv::Value_Response>()
{
  return "training_interfaces::srv::Value_Response";
}

template<>
inline const char * name<training_interfaces::srv::Value_Response>()
{
  return "training_interfaces/srv/Value_Response";
}

template<>
struct has_fixed_size<training_interfaces::srv::Value_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<training_interfaces::srv::Value_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<training_interfaces::srv::Value_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<training_interfaces::srv::Value>()
{
  return "training_interfaces::srv::Value";
}

template<>
inline const char * name<training_interfaces::srv::Value>()
{
  return "training_interfaces/srv/Value";
}

template<>
struct has_fixed_size<training_interfaces::srv::Value>
  : std::integral_constant<
    bool,
    has_fixed_size<training_interfaces::srv::Value_Request>::value &&
    has_fixed_size<training_interfaces::srv::Value_Response>::value
  >
{
};

template<>
struct has_bounded_size<training_interfaces::srv::Value>
  : std::integral_constant<
    bool,
    has_bounded_size<training_interfaces::srv::Value_Request>::value &&
    has_bounded_size<training_interfaces::srv::Value_Response>::value
  >
{
};

template<>
struct is_service<training_interfaces::srv::Value>
  : std::true_type
{
};

template<>
struct is_service_request<training_interfaces::srv::Value_Request>
  : std::true_type
{
};

template<>
struct is_service_response<training_interfaces::srv::Value_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TRAINING_INTERFACES__SRV__DETAIL__VALUE__TRAITS_HPP_
