// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice
#include "groundingdino_interfaces/msg/detail/object_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_position`
#include "groundingdino_interfaces/msg/detail/object_position__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `workspace_bbox`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
groundingdino_interfaces__msg__ObjectPositions__init(groundingdino_interfaces__msg__ObjectPositions * msg)
{
  if (!msg) {
    return false;
  }
  // object_position
  if (!groundingdino_interfaces__msg__ObjectPosition__Sequence__init(&msg->object_position, 0)) {
    groundingdino_interfaces__msg__ObjectPositions__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    groundingdino_interfaces__msg__ObjectPositions__fini(msg);
    return false;
  }
  // workspace_bbox
  if (!std_msgs__msg__Float32MultiArray__init(&msg->workspace_bbox)) {
    groundingdino_interfaces__msg__ObjectPositions__fini(msg);
    return false;
  }
  return true;
}

void
groundingdino_interfaces__msg__ObjectPositions__fini(groundingdino_interfaces__msg__ObjectPositions * msg)
{
  if (!msg) {
    return;
  }
  // object_position
  groundingdino_interfaces__msg__ObjectPosition__Sequence__fini(&msg->object_position);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // workspace_bbox
  std_msgs__msg__Float32MultiArray__fini(&msg->workspace_bbox);
}

bool
groundingdino_interfaces__msg__ObjectPositions__are_equal(const groundingdino_interfaces__msg__ObjectPositions * lhs, const groundingdino_interfaces__msg__ObjectPositions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_position
  if (!groundingdino_interfaces__msg__ObjectPosition__Sequence__are_equal(
      &(lhs->object_position), &(rhs->object_position)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // workspace_bbox
  if (!std_msgs__msg__Float32MultiArray__are_equal(
      &(lhs->workspace_bbox), &(rhs->workspace_bbox)))
  {
    return false;
  }
  return true;
}

bool
groundingdino_interfaces__msg__ObjectPositions__copy(
  const groundingdino_interfaces__msg__ObjectPositions * input,
  groundingdino_interfaces__msg__ObjectPositions * output)
{
  if (!input || !output) {
    return false;
  }
  // object_position
  if (!groundingdino_interfaces__msg__ObjectPosition__Sequence__copy(
      &(input->object_position), &(output->object_position)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // workspace_bbox
  if (!std_msgs__msg__Float32MultiArray__copy(
      &(input->workspace_bbox), &(output->workspace_bbox)))
  {
    return false;
  }
  return true;
}

groundingdino_interfaces__msg__ObjectPositions *
groundingdino_interfaces__msg__ObjectPositions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPositions * msg = (groundingdino_interfaces__msg__ObjectPositions *)allocator.allocate(sizeof(groundingdino_interfaces__msg__ObjectPositions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(groundingdino_interfaces__msg__ObjectPositions));
  bool success = groundingdino_interfaces__msg__ObjectPositions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
groundingdino_interfaces__msg__ObjectPositions__destroy(groundingdino_interfaces__msg__ObjectPositions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    groundingdino_interfaces__msg__ObjectPositions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
groundingdino_interfaces__msg__ObjectPositions__Sequence__init(groundingdino_interfaces__msg__ObjectPositions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPositions * data = NULL;

  if (size) {
    data = (groundingdino_interfaces__msg__ObjectPositions *)allocator.zero_allocate(size, sizeof(groundingdino_interfaces__msg__ObjectPositions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = groundingdino_interfaces__msg__ObjectPositions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        groundingdino_interfaces__msg__ObjectPositions__fini(&data[i - 1]);
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
groundingdino_interfaces__msg__ObjectPositions__Sequence__fini(groundingdino_interfaces__msg__ObjectPositions__Sequence * array)
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
      groundingdino_interfaces__msg__ObjectPositions__fini(&array->data[i]);
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

groundingdino_interfaces__msg__ObjectPositions__Sequence *
groundingdino_interfaces__msg__ObjectPositions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPositions__Sequence * array = (groundingdino_interfaces__msg__ObjectPositions__Sequence *)allocator.allocate(sizeof(groundingdino_interfaces__msg__ObjectPositions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = groundingdino_interfaces__msg__ObjectPositions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
groundingdino_interfaces__msg__ObjectPositions__Sequence__destroy(groundingdino_interfaces__msg__ObjectPositions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    groundingdino_interfaces__msg__ObjectPositions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
groundingdino_interfaces__msg__ObjectPositions__Sequence__are_equal(const groundingdino_interfaces__msg__ObjectPositions__Sequence * lhs, const groundingdino_interfaces__msg__ObjectPositions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!groundingdino_interfaces__msg__ObjectPositions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
groundingdino_interfaces__msg__ObjectPositions__Sequence__copy(
  const groundingdino_interfaces__msg__ObjectPositions__Sequence * input,
  groundingdino_interfaces__msg__ObjectPositions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(groundingdino_interfaces__msg__ObjectPositions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    groundingdino_interfaces__msg__ObjectPositions * data =
      (groundingdino_interfaces__msg__ObjectPositions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!groundingdino_interfaces__msg__ObjectPositions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          groundingdino_interfaces__msg__ObjectPositions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!groundingdino_interfaces__msg__ObjectPositions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
