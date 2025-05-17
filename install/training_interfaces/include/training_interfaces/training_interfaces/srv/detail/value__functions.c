// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice
#include "training_interfaces/srv/detail/value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
training_interfaces__srv__Value_Request__init(training_interfaces__srv__Value_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
training_interfaces__srv__Value_Request__fini(training_interfaces__srv__Value_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
training_interfaces__srv__Value_Request__are_equal(const training_interfaces__srv__Value_Request * lhs, const training_interfaces__srv__Value_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
training_interfaces__srv__Value_Request__copy(
  const training_interfaces__srv__Value_Request * input,
  training_interfaces__srv__Value_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

training_interfaces__srv__Value_Request *
training_interfaces__srv__Value_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Request * msg = (training_interfaces__srv__Value_Request *)allocator.allocate(sizeof(training_interfaces__srv__Value_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(training_interfaces__srv__Value_Request));
  bool success = training_interfaces__srv__Value_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
training_interfaces__srv__Value_Request__destroy(training_interfaces__srv__Value_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    training_interfaces__srv__Value_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
training_interfaces__srv__Value_Request__Sequence__init(training_interfaces__srv__Value_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Request * data = NULL;

  if (size) {
    data = (training_interfaces__srv__Value_Request *)allocator.zero_allocate(size, sizeof(training_interfaces__srv__Value_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = training_interfaces__srv__Value_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        training_interfaces__srv__Value_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
training_interfaces__srv__Value_Request__Sequence__fini(training_interfaces__srv__Value_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      training_interfaces__srv__Value_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

training_interfaces__srv__Value_Request__Sequence *
training_interfaces__srv__Value_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Request__Sequence * array = (training_interfaces__srv__Value_Request__Sequence *)allocator.allocate(sizeof(training_interfaces__srv__Value_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = training_interfaces__srv__Value_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
training_interfaces__srv__Value_Request__Sequence__destroy(training_interfaces__srv__Value_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    training_interfaces__srv__Value_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
training_interfaces__srv__Value_Request__Sequence__are_equal(const training_interfaces__srv__Value_Request__Sequence * lhs, const training_interfaces__srv__Value_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!training_interfaces__srv__Value_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
training_interfaces__srv__Value_Request__Sequence__copy(
  const training_interfaces__srv__Value_Request__Sequence * input,
  training_interfaces__srv__Value_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(training_interfaces__srv__Value_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    training_interfaces__srv__Value_Request * data =
      (training_interfaces__srv__Value_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!training_interfaces__srv__Value_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          training_interfaces__srv__Value_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!training_interfaces__srv__Value_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
training_interfaces__srv__Value_Response__init(training_interfaces__srv__Value_Response * msg)
{
  if (!msg) {
    return false;
  }
  // val
  return true;
}

void
training_interfaces__srv__Value_Response__fini(training_interfaces__srv__Value_Response * msg)
{
  if (!msg) {
    return;
  }
  // val
}

bool
training_interfaces__srv__Value_Response__are_equal(const training_interfaces__srv__Value_Response * lhs, const training_interfaces__srv__Value_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  return true;
}

bool
training_interfaces__srv__Value_Response__copy(
  const training_interfaces__srv__Value_Response * input,
  training_interfaces__srv__Value_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // val
  output->val = input->val;
  return true;
}

training_interfaces__srv__Value_Response *
training_interfaces__srv__Value_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Response * msg = (training_interfaces__srv__Value_Response *)allocator.allocate(sizeof(training_interfaces__srv__Value_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(training_interfaces__srv__Value_Response));
  bool success = training_interfaces__srv__Value_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
training_interfaces__srv__Value_Response__destroy(training_interfaces__srv__Value_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    training_interfaces__srv__Value_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
training_interfaces__srv__Value_Response__Sequence__init(training_interfaces__srv__Value_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Response * data = NULL;

  if (size) {
    data = (training_interfaces__srv__Value_Response *)allocator.zero_allocate(size, sizeof(training_interfaces__srv__Value_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = training_interfaces__srv__Value_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        training_interfaces__srv__Value_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
training_interfaces__srv__Value_Response__Sequence__fini(training_interfaces__srv__Value_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      training_interfaces__srv__Value_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

training_interfaces__srv__Value_Response__Sequence *
training_interfaces__srv__Value_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__srv__Value_Response__Sequence * array = (training_interfaces__srv__Value_Response__Sequence *)allocator.allocate(sizeof(training_interfaces__srv__Value_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = training_interfaces__srv__Value_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
training_interfaces__srv__Value_Response__Sequence__destroy(training_interfaces__srv__Value_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    training_interfaces__srv__Value_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
training_interfaces__srv__Value_Response__Sequence__are_equal(const training_interfaces__srv__Value_Response__Sequence * lhs, const training_interfaces__srv__Value_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!training_interfaces__srv__Value_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
training_interfaces__srv__Value_Response__Sequence__copy(
  const training_interfaces__srv__Value_Response__Sequence * input,
  training_interfaces__srv__Value_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(training_interfaces__srv__Value_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    training_interfaces__srv__Value_Response * data =
      (training_interfaces__srv__Value_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!training_interfaces__srv__Value_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          training_interfaces__srv__Value_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!training_interfaces__srv__Value_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
