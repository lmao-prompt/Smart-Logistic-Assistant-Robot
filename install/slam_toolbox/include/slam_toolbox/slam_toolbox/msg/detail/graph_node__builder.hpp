// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/GraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_node.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/graph_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_GraphNode_pose
{
public:
  explicit Init_GraphNode_pose(::slam_toolbox::msg::GraphNode & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::msg::GraphNode pose(::slam_toolbox::msg::GraphNode::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::GraphNode msg_;
};

class Init_GraphNode_node_id
{
public:
  Init_GraphNode_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphNode_pose node_id(::slam_toolbox::msg::GraphNode::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_GraphNode_pose(msg_);
  }

private:
  ::slam_toolbox::msg::GraphNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::GraphNode>()
{
  return slam_toolbox::msg::builder::Init_GraphNode_node_id();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_
