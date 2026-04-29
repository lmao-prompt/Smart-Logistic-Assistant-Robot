// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from slam_toolbox:msg/LoopClosureEvent.idl
// generated code does not contain a copyright notice
#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "slam_toolbox/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "slam_toolbox/msg/detail/loop_closure_event__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_serialize_slam_toolbox__msg__LoopClosureEvent(
  const slam_toolbox__msg__LoopClosureEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_deserialize_slam_toolbox__msg__LoopClosureEvent(
  eprosima::fastcdr::Cdr &,
  slam_toolbox__msg__LoopClosureEvent * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_slam_toolbox__msg__LoopClosureEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_slam_toolbox__msg__LoopClosureEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
bool cdr_serialize_key_slam_toolbox__msg__LoopClosureEvent(
  const slam_toolbox__msg__LoopClosureEvent * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t get_serialized_size_key_slam_toolbox__msg__LoopClosureEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
size_t max_serialized_size_key_slam_toolbox__msg__LoopClosureEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, slam_toolbox, msg, LoopClosureEvent)();

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
