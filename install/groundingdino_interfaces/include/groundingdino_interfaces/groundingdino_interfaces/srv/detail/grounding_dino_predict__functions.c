// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(msg);
    return false;
  }
  return true;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Request * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  return true;
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Request * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  return true;
}

groundingdino_interfaces__srv__GroundingDinoPredict_Request *
groundingdino_interfaces__srv__GroundingDinoPredict_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg = (groundingdino_interfaces__srv__GroundingDinoPredict_Request *)allocator.allocate(sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request));
  bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__init(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * data = NULL;

  if (size) {
    data = (groundingdino_interfaces__srv__GroundingDinoPredict_Request *)allocator.zero_allocate(size, sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(&data[i - 1]);
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
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array)
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
      groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(&array->data[i]);
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

groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence *
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array = (groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence *)allocator.allocate(sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!groundingdino_interfaces__srv__GroundingDinoPredict_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    groundingdino_interfaces__srv__GroundingDinoPredict_Request * data =
      (groundingdino_interfaces__srv__GroundingDinoPredict_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!groundingdino_interfaces__srv__GroundingDinoPredict_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "groundingdino_interfaces/msg/detail/object_positions__functions.h"

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!groundingdino_interfaces__msg__ObjectPositions__init(&msg->result)) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(msg);
    return false;
  }
  return true;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  groundingdino_interfaces__msg__ObjectPositions__fini(&msg->result);
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Response * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!groundingdino_interfaces__msg__ObjectPositions__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Response * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!groundingdino_interfaces__msg__ObjectPositions__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

groundingdino_interfaces__srv__GroundingDinoPredict_Response *
groundingdino_interfaces__srv__GroundingDinoPredict_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg = (groundingdino_interfaces__srv__GroundingDinoPredict_Response *)allocator.allocate(sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response));
  bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__init(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * data = NULL;

  if (size) {
    data = (groundingdino_interfaces__srv__GroundingDinoPredict_Response *)allocator.zero_allocate(size, sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(&data[i - 1]);
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
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array)
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
      groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(&array->data[i]);
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

groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence *
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array = (groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence *)allocator.allocate(sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!groundingdino_interfaces__srv__GroundingDinoPredict_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    groundingdino_interfaces__srv__GroundingDinoPredict_Response * data =
      (groundingdino_interfaces__srv__GroundingDinoPredict_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!groundingdino_interfaces__srv__GroundingDinoPredict_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
