// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/GraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_edge.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'relative_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/GraphEdge in the package slam_toolbox.
typedef struct slam_toolbox__msg__GraphEdge
{
  int32_t source_id;
  int32_t target_id;
  geometry_msgs__msg__Pose relative_pose;
  double covariance[9];
} slam_toolbox__msg__GraphEdge;

// Struct for a sequence of slam_toolbox__msg__GraphEdge.
typedef struct slam_toolbox__msg__GraphEdge__Sequence
{
  slam_toolbox__msg__GraphEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__GraphEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_H_
