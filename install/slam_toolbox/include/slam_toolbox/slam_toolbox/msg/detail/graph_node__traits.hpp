// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:msg/GraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_node.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__TRAITS_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "slam_toolbox/msg/detail/graph_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace slam_toolbox
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphNode & msg, bool use_flow_style = false)
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
  const slam_toolbox::msg::GraphNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  slam_toolbox::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use slam_toolbox::msg::to_yaml() instead")]]
inline std::string to_yaml(const slam_toolbox::msg::GraphNode & msg)
{
  return slam_toolbox::msg::to_yaml(msg);
}

template<>
inline const char * data_type<slam_toolbox::msg::GraphNode>()
{
  return "slam_toolbox::msg::GraphNode";
}

template<>
inline const char * name<slam_toolbox::msg::GraphNode>()
{
  return "slam_toolbox/msg/GraphNode";
}

template<>
struct has_fixed_size<slam_toolbox::msg::GraphNode>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<slam_toolbox::msg::GraphNode>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<slam_toolbox::msg::GraphNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__TRAITS_HPP_
