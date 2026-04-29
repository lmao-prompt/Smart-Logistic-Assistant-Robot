// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "slam_toolbox/msg/detail/localized_laser_scan__functions.h"
#include "slam_toolbox/msg/detail/localized_laser_scan__struct.hpp"
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

void LocalizedLaserScan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) slam_toolbox::msg::LocalizedLaserScan(_init);
}

void LocalizedLaserScan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<slam_toolbox::msg::LocalizedLaserScan *>(message_memory);
  typed_message->~LocalizedLaserScan();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalizedLaserScan_message_member_array[3] = {
  {
    "scan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::LaserScan>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::LocalizedLaserScan, scan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scanner_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::LocalizedLaserScan, scanner_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovarianceStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_toolbox::msg::LocalizedLaserScan, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalizedLaserScan_message_members = {
  "slam_toolbox::msg",  // message namespace
  "LocalizedLaserScan",  // message name
  3,  // number of fields
  sizeof(slam_toolbox::msg::LocalizedLaserScan),
  false,  // has_any_key_member_
  LocalizedLaserScan_message_member_array,  // message members
  LocalizedLaserScan_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizedLaserScan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalizedLaserScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalizedLaserScan_message_members,
  get_message_typesupport_handle_function,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_hash,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_description,
  &slam_toolbox__msg__LocalizedLaserScan__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace slam_toolbox


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<slam_toolbox::msg::LocalizedLaserScan>()
{
  return &::slam_toolbox::msg::rosidl_typesupport_introspection_cpp::LocalizedLaserScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, slam_toolbox, msg, LocalizedLaserScan)() {
  return &::slam_toolbox::msg::rosidl_typesupport_introspection_cpp::LocalizedLaserScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
