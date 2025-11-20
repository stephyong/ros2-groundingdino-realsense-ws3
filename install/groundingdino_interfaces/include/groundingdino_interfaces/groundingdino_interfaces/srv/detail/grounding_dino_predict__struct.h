// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_H_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GroundingDinoPredict in the package groundingdino_interfaces.
typedef struct groundingdino_interfaces__srv__GroundingDinoPredict_Request
{
  rosidl_runtime_c__String prompt;
} groundingdino_interfaces__srv__GroundingDinoPredict_Request;

// Struct for a sequence of groundingdino_interfaces__srv__GroundingDinoPredict_Request.
typedef struct groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence
{
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "groundingdino_interfaces/msg/detail/object_positions__struct.h"

/// Struct defined in srv/GroundingDinoPredict in the package groundingdino_interfaces.
typedef struct groundingdino_interfaces__srv__GroundingDinoPredict_Response
{
  groundingdino_interfaces__msg__ObjectPositions result;
} groundingdino_interfaces__srv__GroundingDinoPredict_Response;

// Struct for a sequence of groundingdino_interfaces__srv__GroundingDinoPredict_Response.
typedef struct groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence
{
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__STRUCT_H_
