// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/GraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_node.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/GraphNode in the package slam_toolbox.
typedef struct slam_toolbox__msg__GraphNode
{
  int32_t node_id;
  geometry_msgs__msg__Pose pose;
} slam_toolbox__msg__GraphNode;

// Struct for a sequence of slam_toolbox__msg__GraphNode.
typedef struct slam_toolbox__msg__GraphNode__Sequence
{
  slam_toolbox__msg__GraphNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__GraphNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_H_
