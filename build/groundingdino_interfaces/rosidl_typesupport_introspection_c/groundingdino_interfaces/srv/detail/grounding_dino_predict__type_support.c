// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__rosidl_typesupport_introspection_c.h"
#include "groundingdino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"


// Include directives for member types
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__init(message_memory);
}

void groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_fini_function(void * message_memory)
{
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_member_array[1] = {
  {
    "prompt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces__srv__GroundingDinoPredict_Request, prompt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_members = {
  "groundingdino_interfaces__srv",  // message namespace
  "GroundingDinoPredict_Request",  // message name
  1,  // number of fields
  sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Request),
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_member_array,  // message members
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_type_support_handle = {
  0,
  &groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_groundingdino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Request)() {
  if (!groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_type_support_handle.typesupport_identifier) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &groundingdino_interfaces__srv__GroundingDinoPredict_Request__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__rosidl_typesupport_introspection_c.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"


// Include directives for member types
// Member `result`
#include "groundingdino_interfaces/msg/object_positions.h"
// Member `result`
#include "groundingdino_interfaces/msg/detail/object_positions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__init(message_memory);
}

void groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_fini_function(void * message_memory)
{
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(groundingdino_interfaces__srv__GroundingDinoPredict_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_members = {
  "groundingdino_interfaces__srv",  // message namespace
  "GroundingDinoPredict_Response",  // message name
  1,  // number of fields
  sizeof(groundingdino_interfaces__srv__GroundingDinoPredict_Response),
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_member_array,  // message members
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_type_support_handle = {
  0,
  &groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_groundingdino_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Response)() {
  groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, msg, ObjectPositions)();
  if (!groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_type_support_handle.typesupport_identifier) {
    groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &groundingdino_interfaces__srv__GroundingDinoPredict_Response__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "groundingdino_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_members = {
  "groundingdino_interfaces__srv",  // service namespace
  "GroundingDinoPredict",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_Request_message_type_support_handle,
  NULL  // response message
  // groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_Response_message_type_support_handle
};

static rosidl_service_type_support_t groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_type_support_handle = {
  0,
  &groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_groundingdino_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict)() {
  if (!groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_type_support_handle.typesupport_identifier) {
    groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, groundingdino_interfaces, srv, GroundingDinoPredict_Response)()->data;
  }

  return &groundingdino_interfaces__srv__detail__grounding_dino_predict__rosidl_typesupport_introspection_c__GroundingDinoPredict_service_type_support_handle;
}
