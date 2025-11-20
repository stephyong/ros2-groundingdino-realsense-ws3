// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
// generated code does not contain a copyright notice
#include "groundingdino_interfaces/msg/detail/object_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_label`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_point`
// Member `camera_xy_min`
// Member `camera_xy_max`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
groundingdino_interfaces__msg__ObjectPosition__init(groundingdino_interfaces__msg__ObjectPosition * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // class_label
  if (!rosidl_runtime_c__String__init(&msg->class_label)) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
    return false;
  }
  // x_min
  // y_min
  // x_max
  // y_max
  // depth
  // camera_point
  if (!geometry_msgs__msg__Point__init(&msg->camera_point)) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
    return false;
  }
  // camera_xy_min
  if (!geometry_msgs__msg__Point__init(&msg->camera_xy_min)) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
    return false;
  }
  // camera_xy_max
  if (!geometry_msgs__msg__Point__init(&msg->camera_xy_max)) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
    return false;
  }
  return true;
}

void
groundingdino_interfaces__msg__ObjectPosition__fini(groundingdino_interfaces__msg__ObjectPosition * msg)
{
  if (!msg) {
    return;
  }
  // id
  // class_label
  rosidl_runtime_c__String__fini(&msg->class_label);
  // x_min
  // y_min
  // x_max
  // y_max
  // depth
  // camera_point
  geometry_msgs__msg__Point__fini(&msg->camera_point);
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // camera_xy_min
  geometry_msgs__msg__Point__fini(&msg->camera_xy_min);
  // camera_xy_max
  geometry_msgs__msg__Point__fini(&msg->camera_xy_max);
}

bool
groundingdino_interfaces__msg__ObjectPosition__are_equal(const groundingdino_interfaces__msg__ObjectPosition * lhs, const groundingdino_interfaces__msg__ObjectPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // class_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_label), &(rhs->class_label)))
  {
    return false;
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // y_min
  if (lhs->y_min != rhs->y_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // y_max
  if (lhs->y_max != rhs->y_max) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // camera_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->camera_point), &(rhs->camera_point)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // camera_xy_min
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->camera_xy_min), &(rhs->camera_xy_min)))
  {
    return false;
  }
  // camera_xy_max
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->camera_xy_max), &(rhs->camera_xy_max)))
  {
    return false;
  }
  return true;
}

bool
groundingdino_interfaces__msg__ObjectPosition__copy(
  const groundingdino_interfaces__msg__ObjectPosition * input,
  groundingdino_interfaces__msg__ObjectPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // class_label
  if (!rosidl_runtime_c__String__copy(
      &(input->class_label), &(output->class_label)))
  {
    return false;
  }
  // x_min
  output->x_min = input->x_min;
  // y_min
  output->y_min = input->y_min;
  // x_max
  output->x_max = input->x_max;
  // y_max
  output->y_max = input->y_max;
  // depth
  output->depth = input->depth;
  // camera_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->camera_point), &(output->camera_point)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // camera_xy_min
  if (!geometry_msgs__msg__Point__copy(
      &(input->camera_xy_min), &(output->camera_xy_min)))
  {
    return false;
  }
  // camera_xy_max
  if (!geometry_msgs__msg__Point__copy(
      &(input->camera_xy_max), &(output->camera_xy_max)))
  {
    return false;
  }
  return true;
}

groundingdino_interfaces__msg__ObjectPosition *
groundingdino_interfaces__msg__ObjectPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPosition * msg = (groundingdino_interfaces__msg__ObjectPosition *)allocator.allocate(sizeof(groundingdino_interfaces__msg__ObjectPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(groundingdino_interfaces__msg__ObjectPosition));
  bool success = groundingdino_interfaces__msg__ObjectPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
groundingdino_interfaces__msg__ObjectPosition__destroy(groundingdino_interfaces__msg__ObjectPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    groundingdino_interfaces__msg__ObjectPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
groundingdino_interfaces__msg__ObjectPosition__Sequence__init(groundingdino_interfaces__msg__ObjectPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPosition * data = NULL;

  if (size) {
    data = (groundingdino_interfaces__msg__ObjectPosition *)allocator.zero_allocate(size, sizeof(groundingdino_interfaces__msg__ObjectPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = groundingdino_interfaces__msg__ObjectPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        groundingdino_interfaces__msg__ObjectPosition__fini(&data[i - 1]);
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
groundingdino_interfaces__msg__ObjectPosition__Sequence__fini(groundingdino_interfaces__msg__ObjectPosition__Sequence * array)
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
      groundingdino_interfaces__msg__ObjectPosition__fini(&array->data[i]);
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

groundingdino_interfaces__msg__ObjectPosition__Sequence *
groundingdino_interfaces__msg__ObjectPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  groundingdino_interfaces__msg__ObjectPosition__Sequence * array = (groundingdino_interfaces__msg__ObjectPosition__Sequence *)allocator.allocate(sizeof(groundingdino_interfaces__msg__ObjectPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = groundingdino_interfaces__msg__ObjectPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
groundingdino_interfaces__msg__ObjectPosition__Sequence__destroy(groundingdino_interfaces__msg__ObjectPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    groundingdino_interfaces__msg__ObjectPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
groundingdino_interfaces__msg__ObjectPosition__Sequence__are_equal(const groundingdino_interfaces__msg__ObjectPosition__Sequence * lhs, const groundingdino_interfaces__msg__ObjectPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!groundingdino_interfaces__msg__ObjectPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
groundingdino_interfaces__msg__ObjectPosition__Sequence__copy(
  const groundingdino_interfaces__msg__ObjectPosition__Sequence * input,
  groundingdino_interfaces__msg__ObjectPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(groundingdino_interfaces__msg__ObjectPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    groundingdino_interfaces__msg__ObjectPosition * data =
      (groundingdino_interfaces__msg__ObjectPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!groundingdino_interfaces__msg__ObjectPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          groundingdino_interfaces__msg__ObjectPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!groundingdino_interfaces__msg__ObjectPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
