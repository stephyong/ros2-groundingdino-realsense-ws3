# generated from rosidl_generator_py/resource/_idl.py.em
# with input from groundingdino_interfaces:msg/ObjectPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectPosition(type):
    """Metaclass of message 'ObjectPosition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('groundingdino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'groundingdino_interfaces.msg.ObjectPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_position

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectPosition(metaclass=Metaclass_ObjectPosition):
    """Message class 'ObjectPosition'."""

    __slots__ = [
        '_id',
        '_class_label',
        '_x_min',
        '_y_min',
        '_x_max',
        '_y_max',
        '_depth',
        '_camera_point',
        '_pose',
        '_camera_xy_min',
        '_camera_xy_max',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'class_label': 'string',
        'x_min': 'int32',
        'y_min': 'int32',
        'x_max': 'int32',
        'y_max': 'int32',
        'depth': 'float',
        'camera_point': 'geometry_msgs/Point',
        'pose': 'geometry_msgs/PoseStamped',
        'camera_xy_min': 'geometry_msgs/Point',
        'camera_xy_max': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.class_label = kwargs.get('class_label', str())
        self.x_min = kwargs.get('x_min', int())
        self.y_min = kwargs.get('y_min', int())
        self.x_max = kwargs.get('x_max', int())
        self.y_max = kwargs.get('y_max', int())
        self.depth = kwargs.get('depth', float())
        from geometry_msgs.msg import Point
        self.camera_point = kwargs.get('camera_point', Point())
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())
        from geometry_msgs.msg import Point
        self.camera_xy_min = kwargs.get('camera_xy_min', Point())
        from geometry_msgs.msg import Point
        self.camera_xy_max = kwargs.get('camera_xy_max', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.id != other.id:
            return False
        if self.class_label != other.class_label:
            return False
        if self.x_min != other.x_min:
            return False
        if self.y_min != other.y_min:
            return False
        if self.x_max != other.x_max:
            return False
        if self.y_max != other.y_max:
            return False
        if self.depth != other.depth:
            return False
        if self.camera_point != other.camera_point:
            return False
        if self.pose != other.pose:
            return False
        if self.camera_xy_min != other.camera_xy_min:
            return False
        if self.camera_xy_max != other.camera_xy_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def class_label(self):
        """Message field 'class_label'."""
        return self._class_label

    @class_label.setter
    def class_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_label' field must be of type 'str'"
        self._class_label = value

    @builtins.property
    def x_min(self):
        """Message field 'x_min'."""
        return self._x_min

    @x_min.setter
    def x_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_min' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x_min' field must be an integer in [-2147483648, 2147483647]"
        self._x_min = value

    @builtins.property
    def y_min(self):
        """Message field 'y_min'."""
        return self._y_min

    @y_min.setter
    def y_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_min' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y_min' field must be an integer in [-2147483648, 2147483647]"
        self._y_min = value

    @builtins.property
    def x_max(self):
        """Message field 'x_max'."""
        return self._x_max

    @x_max.setter
    def x_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_max' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x_max' field must be an integer in [-2147483648, 2147483647]"
        self._x_max = value

    @builtins.property
    def y_max(self):
        """Message field 'y_max'."""
        return self._y_max

    @y_max.setter
    def y_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_max' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y_max' field must be an integer in [-2147483648, 2147483647]"
        self._y_max = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth = value

    @builtins.property
    def camera_point(self):
        """Message field 'camera_point'."""
        return self._camera_point

    @camera_point.setter
    def camera_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'camera_point' field must be a sub message of type 'Point'"
        self._camera_point = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value

    @builtins.property
    def camera_xy_min(self):
        """Message field 'camera_xy_min'."""
        return self._camera_xy_min

    @camera_xy_min.setter
    def camera_xy_min(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'camera_xy_min' field must be a sub message of type 'Point'"
        self._camera_xy_min = value

    @builtins.property
    def camera_xy_max(self):
        """Message field 'camera_xy_max'."""
        return self._camera_xy_max

    @camera_xy_max.setter
    def camera_xy_max(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'camera_xy_max' field must be a sub message of type 'Point'"
        self._camera_xy_max = value
