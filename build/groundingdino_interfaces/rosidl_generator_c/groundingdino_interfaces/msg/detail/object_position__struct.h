// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_label'
#include "rosidl_runtime_c/string.h"
// Member 'camera_point'
// Member 'camera_xy_min'
// Member 'camera_xy_max'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/ObjectPosition in the package groundingdino_interfaces.
typedef struct groundingdino_interfaces__msg__ObjectPosition
{
  int32_t id;
  rosidl_runtime_c__String class_label;
  /// 2D bounding box in full image coordinates (pixels)
  int32_t x_min;
  int32_t y_min;
  int32_t x_max;
  int32_t y_max;
  /// Depth of the center point along camera Z-axis (metres)
  float depth;
  /// 3D coordinates of the detection center in camera frame
  geometry_msgs__msg__Point camera_point;
  /// 3D pose of the detection center in world frame
  geometry_msgs__msg__PoseStamped pose;
  /// Optional: 3D coordinates of bounding box corners in camera frame
  geometry_msgs__msg__Point camera_xy_min;
  geometry_msgs__msg__Point camera_xy_max;
} groundingdino_interfaces__msg__ObjectPosition;

// Struct for a sequence of groundingdino_interfaces__msg__ObjectPosition.
typedef struct groundingdino_interfaces__msg__ObjectPosition__Sequence
{
  groundingdino_interfaces__msg__ObjectPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} groundingdino_interfaces__msg__ObjectPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
