// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/PoseGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/pose_graph.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'nodes'
#include "slam_toolbox/msg/detail/graph_node__struct.h"
// Member 'edges'
#include "slam_toolbox/msg/detail/graph_edge__struct.h"

/// Struct defined in msg/PoseGraph in the package slam_toolbox.
typedef struct slam_toolbox__msg__PoseGraph
{
  std_msgs__msg__Header header;
  slam_toolbox__msg__GraphNode__Sequence nodes;
  slam_toolbox__msg__GraphEdge__Sequence edges;
} slam_toolbox__msg__PoseGraph;

// Struct for a sequence of slam_toolbox__msg__PoseGraph.
typedef struct slam_toolbox__msg__PoseGraph__Sequence
{
  slam_toolbox__msg__PoseGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__PoseGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__STRUCT_H_
