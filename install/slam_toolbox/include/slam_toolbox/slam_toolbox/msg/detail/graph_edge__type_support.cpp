// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from slam_toolbox:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "slam_toolbox/msg/detail/graph_edge__functions.h"
#include "slam_toolbox/msg/detail/graph_edge__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace slam_toolbox
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraphEdge_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) slam_toolbox::msg::GraphEdge(_init);
}

void GraphEdge_fini_function(void * message_memory)
{
  auto typed_message = static_cast<slam_toolbox::msg::GraphEdge *>(message_memory);
  typed_message->~GraphEdge();
}

size_t size_function__GraphEdge__covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__GraphEdge__covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__GraphEdge__covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraphEdge__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GraphEdge__covariance(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GraphEdge__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GraphEdge__covariance(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraphEdge_message_member_array[4] = {
  {
    "source_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::GraphEdge, source_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::GraphEdge, target_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relative_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::GraphEdge, relative_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::GraphEdge, covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraphEdge__covariance,  // size() function pointer
    get_const_function__GraphEdge__covariance,  // get_const(index) function pointer
    get_function__GraphEdge__covariance,  // get(index) function pointer
    fetch_function__GraphEdge__covariance,  // fetch(index, &value) function pointer
    assign_function__GraphEdge__covariance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraphEdge_message_members = {
  "slam_toolbox::msg",  // message namespace
  "GraphEdge",  // message name
  4,  // number of fields
  sizeof(slam_toolbox::msg::GraphEdge),
  false,  // has_any_key_member_
  GraphEdge_message_member_array,  // message members
  GraphEdge_init_function,  // function to initialize message memory (memory has to be allocated)
  GraphEdge_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraphEdge_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraphEdge_message_members,
  get_message_typesupport_handle_function,
  &slam_toolbox__msg__GraphEdge__get_type_hash,
  &slam_toolbox__msg__GraphEdge__get_type_description,
  &slam_toolbox__msg__GraphEdge__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace slam_toolbox


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::msg::GraphEdge>()
{
  return &::slam_toolbox::msg::rosidl_typesupport_introspection_cpp::GraphEdge_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, msg, GraphEdge)() {
  return &::slam_toolbox::msg::rosidl_typesupport_introspection_cpp::GraphEdge_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
