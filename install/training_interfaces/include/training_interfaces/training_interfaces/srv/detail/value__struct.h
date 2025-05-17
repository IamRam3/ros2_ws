// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_H_
#define TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Value in the package training_interfaces.
typedef struct training_interfaces__srv__Value_Request
{
  int32_t a;
  int32_t b;
} training_interfaces__srv__Value_Request;

// Struct for a sequence of training_interfaces__srv__Value_Request.
typedef struct training_interfaces__srv__Value_Request__Sequence
{
  training_interfaces__srv__Value_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} training_interfaces__srv__Value_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Value in the package training_interfaces.
typedef struct training_interfaces__srv__Value_Response
{
  int32_t val;
} training_interfaces__srv__Value_Response;

// Struct for a sequence of training_interfaces__srv__Value_Response.
typedef struct training_interfaces__srv__Value_Response__Sequence
{
  training_interfaces__srv__Value_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} training_interfaces__srv__Value_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAINING_INTERFACES__SRV__DETAIL__VALUE__STRUCT_H_
