# generated from rosidl_generator_py/resource/_idl.py.em
# with input from groundingdino_interfaces:srv/GroundingDinoPredict.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GroundingDinoPredict_Request(type):
    """Metaclass of message 'GroundingDinoPredict_Request'."""

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
                'groundingdino_interfaces.srv.GroundingDinoPredict_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grounding_dino_predict__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grounding_dino_predict__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grounding_dino_predict__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grounding_dino_predict__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grounding_dino_predict__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GroundingDinoPredict_Request(metaclass=Metaclass_GroundingDinoPredict_Request):
    """Message class 'GroundingDinoPredict_Request'."""

    __slots__ = [
        '_prompt',
    ]

    _fields_and_field_types = {
        'prompt': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prompt = kwargs.get('prompt', str())

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
        if self.prompt != other.prompt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prompt(self):
        """Message field 'prompt'."""
        return self._prompt

    @prompt.setter
    def prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prompt' field must be of type 'str'"
        self._prompt = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GroundingDinoPredict_Response(type):
    """Metaclass of message 'GroundingDinoPredict_Response'."""

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
                'groundingdino_interfaces.srv.GroundingDinoPredict_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__grounding_dino_predict__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__grounding_dino_predict__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__grounding_dino_predict__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__grounding_dino_predict__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__grounding_dino_predict__response

            from groundingdino_interfaces.msg import ObjectPositions
            if ObjectPositions.__class__._TYPE_SUPPORT is None:
                ObjectPositions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GroundingDinoPredict_Response(metaclass=Metaclass_GroundingDinoPredict_Response):
    """Message class 'GroundingDinoPredict_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'groundingdino_interfaces/ObjectPositions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['groundingdino_interfaces', 'msg'], 'ObjectPositions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from groundingdino_interfaces.msg import ObjectPositions
        self.result = kwargs.get('result', ObjectPositions())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from groundingdino_interfaces.msg import ObjectPositions
            assert \
                isinstance(value, ObjectPositions), \
                "The 'result' field must be a sub message of type 'ObjectPositions'"
        self._result = value


class Metaclass_GroundingDinoPredict(type):
    """Metaclass of service 'GroundingDinoPredict'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('groundingdino_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'groundingdino_interfaces.srv.GroundingDinoPredict')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__grounding_dino_predict

            from groundingdino_interfaces.srv import _grounding_dino_predict
            if _grounding_dino_predict.Metaclass_GroundingDinoPredict_Request._TYPE_SUPPORT is None:
                _grounding_dino_predict.Metaclass_GroundingDinoPredict_Request.__import_type_support__()
            if _grounding_dino_predict.Metaclass_GroundingDinoPredict_Response._TYPE_SUPPORT is None:
                _grounding_dino_predict.Metaclass_GroundingDinoPredict_Response.__import_type_support__()


class GroundingDinoPredict(metaclass=Metaclass_GroundingDinoPredict):
    from groundingdino_interfaces.srv._grounding_dino_predict import GroundingDinoPredict_Request as Request
    from groundingdino_interfaces.srv._grounding_dino_predict import GroundingDinoPredict_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
