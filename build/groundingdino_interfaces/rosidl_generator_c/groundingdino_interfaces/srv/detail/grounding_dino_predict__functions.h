// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#ifndef GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__FUNCTIONS_H_
#define GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "groundingdino_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"

/// Initialize srv/GroundingDinoPredict message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request
 * )) before or use
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg);

/// Finalize srv/GroundingDinoPredict message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg);

/// Create srv/GroundingDinoPredict message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
groundingdino_interfaces__srv__GroundingDinoPredict_Request *
groundingdino_interfaces__srv__GroundingDinoPredict_Request__create();

/// Destroy srv/GroundingDinoPredict message.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Request * msg);

/// Check for srv/GroundingDinoPredict message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Request * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Request * rhs);

/// Copy a srv/GroundingDinoPredict message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Request * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * output);

/// Initialize array of srv/GroundingDinoPredict messages.
/**
 * It allocates the memory for the number of elements and calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__init(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array, size_t size);

/// Finalize array of srv/GroundingDinoPredict messages.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array);

/// Create array of srv/GroundingDinoPredict messages.
/**
 * It allocates the memory for the array and calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence *
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__create(size_t size);

/// Destroy array of srv/GroundingDinoPredict messages.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * array);

/// Check for srv/GroundingDinoPredict message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * rhs);

/// Copy an array of srv/GroundingDinoPredict messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__Sequence * output);

/// Initialize srv/GroundingDinoPredict message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response
 * )) before or use
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg);

/// Finalize srv/GroundingDinoPredict message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg);

/// Create srv/GroundingDinoPredict message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
groundingdino_interfaces__srv__GroundingDinoPredict_Response *
groundingdino_interfaces__srv__GroundingDinoPredict_Response__create();

/// Destroy srv/GroundingDinoPredict message.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Response * msg);

/// Check for srv/GroundingDinoPredict message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Response * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Response * rhs);

/// Copy a srv/GroundingDinoPredict message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Response * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * output);

/// Initialize array of srv/GroundingDinoPredict messages.
/**
 * It allocates the memory for the number of elements and calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__init(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array, size_t size);

/// Finalize array of srv/GroundingDinoPredict messages.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__fini(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array);

/// Create array of srv/GroundingDinoPredict messages.
/**
 * It allocates the memory for the array and calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence *
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__create(size_t size);

/// Destroy array of srv/GroundingDinoPredict messages.
/**
 * It calls
 * groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
void
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__destroy(groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * array);

/// Check for srv/GroundingDinoPredict message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__are_equal(const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * lhs, const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * rhs);

/// Copy an array of srv/GroundingDinoPredict messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_groundingdino_interfaces
bool
groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence__copy(
  const groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * input,
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GROUNDINGDINO_INTERFACES__SRV__DETAIL__GROUNDING_DINO_PREDICT__FUNCTIONS_H_
