// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/NewNodeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/new_node_event.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'edge'
#include "slam_toolbox/msg/detail/graph_edge__struct.h"

/// Struct defined in msg/NewNodeEvent in the package slam_toolbox.
typedef struct slam_toolbox__msg__NewNodeEvent
{
  int32_t new_node_id;
  builtin_interfaces__msg__Time stamp;
  geometry_msgs__msg__Pose pose;
  slam_toolbox__msg__GraphEdge edge;
} slam_toolbox__msg__NewNodeEvent;

// Struct for a sequence of slam_toolbox__msg__NewNodeEvent.
typedef struct slam_toolbox__msg__NewNodeEvent__Sequence
{
  slam_toolbox__msg__NewNodeEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__NewNodeEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__STRUCT_H_
