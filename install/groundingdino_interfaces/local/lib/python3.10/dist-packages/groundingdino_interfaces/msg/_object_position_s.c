// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from groundingdino_interfaces:msg/ObjectPosition.idl
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
#include "groundingdino_interfaces/msg/detail/object_position__struct.h"
#include "groundingdino_interfaces/msg/detail/object_position__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool groundingdino_interfaces__msg__object_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("groundingdino_interfaces.msg._object_position.ObjectPosition", full_classname_dest, 60) == 0);
  }
  groundingdino_interfaces__msg__ObjectPosition * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // class_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->class_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // x_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_min = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_min = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_max = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_max = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // camera_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->camera_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // camera_xy_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_xy_min");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->camera_xy_min)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // camera_xy_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_xy_max");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->camera_xy_max)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * groundingdino_interfaces__msg__object_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("groundingdino_interfaces.msg._object_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  groundingdino_interfaces__msg__ObjectPosition * ros_message = (groundingdino_interfaces__msg__ObjectPosition *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->class_label.data,
      strlen(ros_message->class_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_max
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_point
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->camera_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_xy_min
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->camera_xy_min);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_xy_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_xy_max
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->camera_xy_max);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_xy_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
