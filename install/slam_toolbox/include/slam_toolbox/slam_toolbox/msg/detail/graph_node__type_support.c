// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_toolbox:msg/GraphNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_toolbox/msg/detail/graph_node__rosidl_typesupport_introspection_c.h"
#include "slam_toolbox/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_toolbox/msg/detail/graph_node__functions.h"
#include "slam_toolbox/msg/detail/graph_node__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_toolbox__msg__GraphNode__init(message_memory);
}

void slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function(void * message_memory)
{
  slam_toolbox__msg__GraphNode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[2] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__msg__GraphNode, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox__msg__GraphNode, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members = {
  "slam_toolbox__msg",  // message namespace
  "GraphNode",  // message name
  2,  // number of fields
  sizeof(slam_toolbox__msg__GraphNode),
  false,  // has_any_key_member_
  slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array,  // message members
  slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_init_function,  // function to initialize message memory (memory has to be allocated)
  slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle = {
  0,
  &slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_members,
  get_message_typesupport_handle_function,
  &slam_toolbox__msg__GraphNode__get_type_hash,
  &slam_toolbox__msg__GraphNode__get_type_description,
  &slam_toolbox__msg__GraphNode__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_toolbox
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_toolbox, msg, GraphNode)() {
  slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier) {
    slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &slam_toolbox__msg__GraphNode__rosidl_typesupport_introspection_c__GraphNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
