// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/LoopClosureEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/loop_closure_event.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/LoopClosureEvent in the package slam_toolbox.
typedef struct slam_toolbox__msg__LoopClosureEvent
{
  builtin_interfaces__msg__Time stamp;
} slam_toolbox__msg__LoopClosureEvent;

// Struct for a sequence of slam_toolbox__msg__LoopClosureEvent.
typedef struct slam_toolbox__msg__LoopClosureEvent__Sequence
{
  slam_toolbox__msg__LoopClosureEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__LoopClosureEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_H_
