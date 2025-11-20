// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from groundingdino_interfaces:msg/ObjectPositions.idl
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
#include "groundingdino_interfaces/msg/detail/object_positions__struct.h"
#include "groundingdino_interfaces/msg/detail/object_positions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "groundingdino_interfaces/msg/detail/object_position__functions.h"
// end nested array functions include
bool groundingdino_interfaces__msg__object_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * groundingdino_interfaces__msg__object_position__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32_multi_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32_multi_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool groundingdino_interfaces__msg__object_positions__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("groundingdino_interfaces.msg._object_positions.ObjectPositions", full_classname_dest, 62) == 0);
  }
  groundingdino_interfaces__msg__ObjectPositions * ros_message = _ros_message;
  {  // object_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_position");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'object_position'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!groundingdino_interfaces__msg__ObjectPosition__Sequence__init(&(ros_message->object_position), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create groundingdino_interfaces__msg__ObjectPosition__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    groundingdino_interfaces__msg__ObjectPosition * dest = ros_message->object_position.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!groundingdino_interfaces__msg__object_position__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // workspace_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "workspace_bbox");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32_multi_array__convert_from_py(field, &ros_message->workspace_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * groundingdino_interfaces__msg__object_positions__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectPositions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("groundingdino_interfaces.msg._object_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectPositions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  groundingdino_interfaces__msg__ObjectPositions * ros_message = (groundingdino_interfaces__msg__ObjectPositions *)raw_ros_message;
  {  // object_position
    PyObject * field = NULL;
    size_t size = ros_message->object_position.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    groundingdino_interfaces__msg__ObjectPosition * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->object_position.data[i]);
      PyObject * pyitem = groundingdino_interfaces__msg__object_position__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // workspace_bbox
    PyObject * field = NULL;
    field = std_msgs__msg__float32_multi_array__convert_to_py(&ros_message->workspace_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "workspace_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
