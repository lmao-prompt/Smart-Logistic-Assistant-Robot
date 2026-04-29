// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice
#include "slam_toolbox/msg/detail/localized_laser_scan__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "slam_toolbox/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_toolbox/msg/detail/localized_laser_scan__struct.h"
#include "slam_toolbox/msg/detail/localized_laser_scan__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"  // pose
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"  // scanner_offset
#include "sensor_msgs/msg/detail/laser_scan__functions.h"  // scan

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_geometry_msgs__msg__PoseWithCovarianceStamped(
  const geometry_msgs__msg__PoseWithCovarianceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_deserialize_geometry_msgs__msg__PoseWithCovarianceStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__PoseWithCovarianceStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  const geometry_msgs__msg__PoseWithCovarianceStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovarianceStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_deserialize_geometry_msgs__msg__TransformStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TransformStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_key_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_key_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_key_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_deserialize_sensor_msgs__msg__LaserScan(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__LaserScan * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
bool cdr_serialize_key_sensor_msgs__msg__LaserScan(
  const sensor_msgs__msg__LaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t get_serialized_size_key_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
size_t max_serialized_size_key_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_slam_toolbox
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan)();


using _LocalizedLaserScan__ros_msg_type = slam_toolbox__msg__LocalizedLaserScan;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_serialize_slam_toolbox__msg__LocalizedLaserScan(
  const slam_toolbox__msg__LocalizedLaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scan
  {
    cdr_serialize_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  // Field name: scanner_offset
  {
    cdr_serialize_geometry_msgs__msg__TransformStamped(
      &ros_message->scanner_offset, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__PoseWithCovarianceStamped(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_deserialize_slam_toolbox__msg__LocalizedLaserScan(
  eprosima::fastcdr::Cdr & cdr,
  slam_toolbox__msg__LocalizedLaserScan * ros_message)
{
  // Field name: scan
  {
    cdr_deserialize_sensor_msgs__msg__LaserScan(cdr, &ros_message->scan);
  }

  // Field name: scanner_offset
  {
    cdr_deserialize_geometry_msgs__msg__TransformStamped(cdr, &ros_message->scanner_offset);
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__PoseWithCovarianceStamped(cdr, &ros_message->pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_slam_toolbox__msg__LocalizedLaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LocalizedLaserScan__ros_msg_type * ros_message = static_cast<const _LocalizedLaserScan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scan
  current_alignment += get_serialized_size_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  // Field name: scanner_offset
  current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
    &(ros_message->scanner_offset), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_slam_toolbox__msg__LocalizedLaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scanner_offset
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseWithCovarianceStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = slam_toolbox__msg__LocalizedLaserScan;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_serialize_key_slam_toolbox__msg__LocalizedLaserScan(
  const slam_toolbox__msg__LocalizedLaserScan * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scan
  {
    cdr_serialize_key_sensor_msgs__msg__LaserScan(
      &ros_message->scan, cdr);
  }

  // Field name: scanner_offset
  {
    cdr_serialize_key_geometry_msgs__msg__TransformStamped(
      &ros_message->scanner_offset, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__PoseWithCovarianceStamped(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_key_slam_toolbox__msg__LocalizedLaserScan(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LocalizedLaserScan__ros_msg_type * ros_message = static_cast<const _LocalizedLaserScan__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scan
  current_alignment += get_serialized_size_key_sensor_msgs__msg__LaserScan(
    &(ros_message->scan), current_alignment);

  // Field name: scanner_offset
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TransformStamped(
    &(ros_message->scanner_offset), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_key_slam_toolbox__msg__LocalizedLaserScan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: scan
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__LaserScan(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scanner_offset
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__PoseWithCovarianceStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = slam_toolbox__msg__LocalizedLaserScan;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LocalizedLaserScan__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const slam_toolbox__msg__LocalizedLaserScan * ros_message = static_cast<const slam_toolbox__msg__LocalizedLaserScan *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_slam_toolbox__msg__LocalizedLaserScan(ros_message, cdr);
}

static bool _LocalizedLaserScan__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  slam_toolbox__msg__LocalizedLaserScan * ros_message = static_cast<slam_toolbox__msg__LocalizedLaserScan *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_slam_toolbox__msg__LocalizedLaserScan(cdr, ros_message);
}

static uint32_t _LocalizedLaserScan__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_slam_toolbox__msg__LocalizedLaserScan(
      untyped_ros_message, 0));
}

static size_t _LocalizedLaserScan__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_slam_toolbox__msg__LocalizedLaserScan(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LocalizedLaserScan = {
  "slam_toolbox::msg",
  "LocalizedLaserScan",
  _LocalizedLaserScan__cdr_serialize,
  _LocalizedLaserScan__cdr_deserialize,
  _LocalizedLaserScan__get_serialized_size,
  _LocalizedLaserScan__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LocalizedLaserScan__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LocalizedLaserScan,
  get_message_typesupport_handle_function,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_hash,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_description,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, msg, LocalizedLaserScan)() {
  return &_LocalizedLaserScan__type_support;
}

#if defined(__cplusplus)
}
#endif
