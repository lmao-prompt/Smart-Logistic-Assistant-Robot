// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_toolbox:msg/PoseGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_toolbox/msg/detail/pose_graph__rosidl_typesupport_introspection_c.h"
#include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_toolbox/msg/detail/pose_graph__functions.h"
#include "slam_toolbox/msg/detail/pose_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "slam_toolbox/msg/graph_node.h"
// Member `nodes`
#include "slam_toolbox/msg/detail/graph_node__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "slam_toolbox/msg/graph_edge.h"
// Member `edges`
#include "slam_toolbox/msg/detail/graph_edge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__msg__PoseGraph__init(message_memory);
}

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_fini_function(void * message_memory)
{
  slam_toolbox__msg__PoseGraph__fini(message_memory);
}

size_t slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraph__nodes(
  const void * untyped_member)
{
  const slam_toolbox__msg__GraphNode__Sequence * member =
    (const slam_toolbox__msg__GraphNode__Sequence *)(untyped_member);
  return member->size;
}

const void * slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__nodes(
  const void * untyped_member, size_t index)
{
  const slam_toolbox__msg__GraphNode__Sequence * member =
    (const slam_toolbox__msg__GraphNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__nodes(
  void * untyped_member, size_t index)
{
  slam_toolbox__msg__GraphNode__Sequence * member =
    (slam_toolbox__msg__GraphNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__fetch_function__PoseGraph__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const slam_toolbox__msg__GraphNode * item =
    ((const slam_toolbox__msg__GraphNode *)
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__nodes(untyped_member, index));
  slam_toolbox__msg__GraphNode * value =
    (slam_toolbox__msg__GraphNode *)(untyped_value);
  *value = *item;
}

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__assign_function__PoseGraph__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  slam_toolbox__msg__GraphNode * item =
    ((slam_toolbox__msg__GraphNode *)
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__nodes(untyped_member, index));
  const slam_toolbox__msg__GraphNode * value =
    (const slam_toolbox__msg__GraphNode *)(untyped_value);
  *item = *value;
}

bool slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraph__nodes(
  void * untyped_member, size_t size)
{
  slam_toolbox__msg__GraphNode__Sequence * member =
    (slam_toolbox__msg__GraphNode__Sequence *)(untyped_member);
  slam_toolbox__msg__GraphNode__Sequence__fini(member);
  return slam_toolbox__msg__GraphNode__Sequence__init(member, size);
}

size_t slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraph__edges(
  const void * untyped_member)
{
  const slam_toolbox__msg__GraphEdge__Sequence * member =
    (const slam_toolbox__msg__GraphEdge__Sequence *)(untyped_member);
  return member->size;
}

const void * slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__edges(
  const void * untyped_member, size_t index)
{
  const slam_toolbox__msg__GraphEdge__Sequence * member =
    (const slam_toolbox__msg__GraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__edges(
  void * untyped_member, size_t index)
{
  slam_toolbox__msg__GraphEdge__Sequence * member =
    (slam_toolbox__msg__GraphEdge__Sequence *)(untyped_member);
  return &member->data[index];
}

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__fetch_function__PoseGraph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const slam_toolbox__msg__GraphEdge * item =
    ((const slam_toolbox__msg__GraphEdge *)
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__edges(untyped_member, index));
  slam_toolbox__msg__GraphEdge * value =
    (slam_toolbox__msg__GraphEdge *)(untyped_value);
  *value = *item;
}

void slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__assign_function__PoseGraph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  slam_toolbox__msg__GraphEdge * item =
    ((slam_toolbox__msg__GraphEdge *)
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__edges(untyped_member, index));
  const slam_toolbox__msg__GraphEdge * value =
    (const slam_toolbox__msg__GraphEdge *)(untyped_value);
  *item = *value;
}

bool slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraph__edges(
  void * untyped_member, size_t size)
{
  slam_toolbox__msg__GraphEdge__Sequence * member =
    (slam_toolbox__msg__GraphEdge__Sequence *)(untyped_member);
  slam_toolbox__msg__GraphEdge__Sequence__fini(member);
  return slam_toolbox__msg__GraphEdge__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__msg__PoseGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__msg__PoseGraph, nodes),  // bytes offset in struct
    NULL,  // default value
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraph__nodes,  // size() function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__nodes,  // get_const(index) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__nodes,  // get(index) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__fetch_function__PoseGraph__nodes,  // fetch(index, &value) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__assign_function__PoseGraph__nodes,  // assign(index, value) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraph__nodes  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__msg__PoseGraph, edges),  // bytes offset in struct
    NULL,  // default value
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__size_function__PoseGraph__edges,  // size() function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_const_function__PoseGraph__edges,  // get_const(index) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__get_function__PoseGraph__edges,  // get(index) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__fetch_function__PoseGraph__edges,  // fetch(index, &value) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__assign_function__PoseGraph__edges,  // assign(index, value) function pointer
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__resize_function__PoseGraph__edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_members = {
  "slam_toolbox__msg",  // message namespace
  "PoseGraph",  // message name
  3,  // number of fields
  sizeof(slam_toolbox__msg__PoseGraph),
  false,  // has_any_key_member_
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array,  // message members
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle = {
  0,
  &slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_members,
  get_message_typesupport_handle_function,
  &slam_toolbox__msg__PoseGraph__get_type_hash,
  &slam_toolbox__msg__PoseGraph__get_type_description,
  &slam_toolbox__msg__PoseGraph__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, msg, PoseGraph)() {
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, msg, GraphNode)();
  slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, msg, GraphEdge)();
  if (!slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle.typesupport_identifier) {
    slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &slam_toolbox__msg__PoseGraph__rosidl_typesupport_introspection_c__PoseGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
