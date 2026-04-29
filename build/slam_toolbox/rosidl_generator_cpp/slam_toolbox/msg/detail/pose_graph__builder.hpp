// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/PoseGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/pose_graph.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/pose_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_PoseGraph_edges
{
public:
  explicit Init_PoseGraph_edges(::slam_toolbox::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::msg::PoseGraph edges(::slam_toolbox::msg::PoseGraph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::PoseGraph msg_;
};

class Init_PoseGraph_nodes
{
public:
  explicit Init_PoseGraph_nodes(::slam_toolbox::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_edges nodes(::slam_toolbox::msg::PoseGraph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_PoseGraph_edges(msg_);
  }

private:
  ::slam_toolbox::msg::PoseGraph msg_;
};

class Init_PoseGraph_header
{
public:
  Init_PoseGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraph_nodes header(::slam_toolbox::msg::PoseGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseGraph_nodes(msg_);
  }

private:
  ::slam_toolbox::msg::PoseGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::PoseGraph>()
{
  return slam_toolbox::msg::builder::Init_PoseGraph_header();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
