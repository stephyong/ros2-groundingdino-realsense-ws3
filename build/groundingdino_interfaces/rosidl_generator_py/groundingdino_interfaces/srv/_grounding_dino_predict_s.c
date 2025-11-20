// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"
#include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool groundingdino_interfaces__srv__grounding_dino_predict__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("groundingdino_interfaces.srv._grounding_dino_predict.GroundingDinoPredict_Request", full_classname_dest, 81) == 0);
  }
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * ros_message = _ros_message;
  {  // prompt
    PyObject * field = PyObject_GetAttrString(_pymsg, "prompt");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->prompt, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * groundingdino_interfaces__srv__grounding_dino_predict__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GroundingDinoPredict_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("groundingdino_interfaces.srv._grounding_dino_predict");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GroundingDinoPredict_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  groundingdino_interfaces__srv__GroundingDinoPredict_Request * ros_message = (groundingdino_interfaces__srv__GroundingDinoPredict_Request *)raw_ros_message;
  {  // prompt
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->prompt.data,
      strlen(ros_message->prompt.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prompt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__struct.h"
// already included above
// #include "groundingdino_interfaces/srv/detail/grounding_dino_predict__functions.h"

bool groundingdino_interfaces__msg__object_positions__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * groundingdino_interfaces__msg__object_positions__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool groundingdino_interfaces__srv__grounding_dino_predict__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("groundingdino_interfaces.srv._grounding_dino_predict.GroundingDinoPredict_Response", full_classname_dest, 82) == 0);
  }
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!groundingdino_interfaces__msg__object_positions__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * groundingdino_interfaces__srv__grounding_dino_predict__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GroundingDinoPredict_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("groundingdino_interfaces.srv._grounding_dino_predict");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GroundingDinoPredict_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  groundingdino_interfaces__srv__GroundingDinoPredict_Response * ros_message = (groundingdino_interfaces__srv__GroundingDinoPredict_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = groundingdino_interfaces__msg__object_positions__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
