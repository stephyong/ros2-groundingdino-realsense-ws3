// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_H_
#define GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_position'
#include "groundingdino_interfaces/msg/detail/object_position__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'workspace_bbox'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/ObjectPositions in the package groundingdino_interfaces.
/**
  * ObjectPositions.msg
 */
typedef struct groundingdino_interfaces__msg__ObjectPositions
{
  groundingdino_interfaces__msg__ObjectPosition__Sequence object_position;
  /// Annotated BGR image with all detections drawn
  sensor_msgs__msg__Image image;
  /// Workspace bounding box in pixels: [x_min, x_max, y_min, y_max]
  std_msgs__msg__Float32MultiArray workspace_bbox;
} groundingdino_interfaces__msg__ObjectPositions;

// Struct for a sequence of groundingdino_interfaces__msg__ObjectPositions.
typedef struct groundingdino_interfaces__msg__ObjectPositions__Sequence
{
  groundingdino_interfaces__msg__ObjectPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} groundingdino_interfaces__msg__ObjectPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GROUNDINGDINO_INTERFACES__MSG__DETAIL__OBJECT_POSITIONS__STRUCT_H_
