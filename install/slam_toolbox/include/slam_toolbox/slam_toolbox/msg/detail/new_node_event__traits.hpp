// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:msg/NewNodeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/new_node_event.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__TRAITS_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "slam_toolbox/msg/detail/new_node_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'edge'
#include "slam_toolbox/msg/detail/graph_edge__traits.hpp"

namespace slam_toolbox
{

namespace msg
{

inline void to_flow_style_yaml(
  const NewNodeEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_node_id
  {
    out << "new_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_node_id, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: edge
  {
    out << "edge: ";
    to_flow_style_yaml(msg.edge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewNodeEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_node_id, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: edge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge:\n";
    to_block_style_yaml(msg.edge, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewNodeEvent & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace slam_toolbox

namespace rosidl_generator_traits
{

[[deprecated("use slam_toolbox::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const slam_toolbox::msg::NewNodeEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  slam_toolbox::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use slam_toolbox::msg::to_yaml() instead")]]
inline std::string to_yaml(const slam_toolbox::msg::NewNodeEvent & msg)
{
  return slam_toolbox::msg::to_yaml(msg);
}

template<>
inline const char * data_type<slam_toolbox::msg::NewNodeEvent>()
{
  return "slam_toolbox::msg::NewNodeEvent";
}

template<>
inline const char * name<slam_toolbox::msg::NewNodeEvent>()
{
  return "slam_toolbox/msg/NewNodeEvent";
}

template<>
struct has_fixed_size<slam_toolbox::msg::NewNodeEvent>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<slam_toolbox::msg::GraphEdge>::value> {};

template<>
struct has_bounded_size<slam_toolbox::msg::NewNodeEvent>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<slam_toolbox::msg::GraphEdge>::value> {};

template<>
struct is_message<slam_toolbox::msg::NewNodeEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__TRAITS_HPP_
