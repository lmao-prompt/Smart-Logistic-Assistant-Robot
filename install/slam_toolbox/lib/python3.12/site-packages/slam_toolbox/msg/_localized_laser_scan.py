# generated from rosidl_generator_py/resource/_idl.py.em
# with input from slam_toolbox:msg/LocalizedLaserScan.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalizedLaserScan(type):
    """Metaclass of message 'LocalizedLaserScan'."""

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
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.msg.LocalizedLaserScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__localized_laser_scan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__localized_laser_scan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__localized_laser_scan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__localized_laser_scan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__localized_laser_scan

            from geometry_msgs.msg import PoseWithCovarianceStamped
            if PoseWithCovarianceStamped.__class__._TYPE_SUPPORT is None:
                PoseWithCovarianceStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import LaserScan
            if LaserScan.__class__._TYPE_SUPPORT is None:
                LaserScan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalizedLaserScan(metaclass=Metaclass_LocalizedLaserScan):
    """Message class 'LocalizedLaserScan'."""

    __slots__ = [
        '_scan',
        '_scanner_offset',
        '_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'scan': 'sensor_msgs/LaserScan',
        'scanner_offset': 'geometry_msgs/TransformStamped',
        'pose': 'geometry_msgs/PoseWithCovarianceStamped',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'LaserScan'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovarianceStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import LaserScan
        self.scan = kwargs.get('scan', LaserScan())
        from geometry_msgs.msg import TransformStamped
        self.scanner_offset = kwargs.get('scanner_offset', TransformStamped())
        from geometry_msgs.msg import PoseWithCovarianceStamped
        self.pose = kwargs.get('pose', PoseWithCovarianceStamped())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.scan != other.scan:
            return False
        if self.scanner_offset != other.scanner_offset:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scan(self):
        """Message field 'scan'."""
        return self._scan

    @scan.setter
    def scan(self, value):
        if self._check_fields:
            from sensor_msgs.msg import LaserScan
            assert \
                isinstance(value, LaserScan), \
                "The 'scan' field must be a sub message of type 'LaserScan'"
        self._scan = value

    @builtins.property
    def scanner_offset(self):
        """Message field 'scanner_offset'."""
        return self._scanner_offset

    @scanner_offset.setter
    def scanner_offset(self, value):
        if self._check_fields:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'scanner_offset' field must be a sub message of type 'TransformStamped'"
        self._scanner_offset = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseWithCovarianceStamped
            assert \
                isinstance(value, PoseWithCovarianceStamped), \
                "The 'pose' field must be a sub message of type 'PoseWithCovarianceStamped'"
        self._pose = value
