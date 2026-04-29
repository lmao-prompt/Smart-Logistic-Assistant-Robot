// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/GraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_edge.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/graph_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_GraphEdge_covariance
{
public:
  explicit Init_GraphEdge_covariance(::slam_toolbox::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::msg::GraphEdge covariance(::slam_toolbox::msg::GraphEdge::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::GraphEdge msg_;
};

class Init_GraphEdge_relative_pose
{
public:
  explicit Init_GraphEdge_relative_pose(::slam_toolbox::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  Init_GraphEdge_covariance relative_pose(::slam_toolbox::msg::GraphEdge::_relative_pose_type arg)
  {
    msg_.relative_pose = std::move(arg);
    return Init_GraphEdge_covariance(msg_);
  }

private:
  ::slam_toolbox::msg::GraphEdge msg_;
};

class Init_GraphEdge_target_id
{
public:
  explicit Init_GraphEdge_target_id(::slam_toolbox::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  Init_GraphEdge_relative_pose target_id(::slam_toolbox::msg::GraphEdge::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return Init_GraphEdge_relative_pose(msg_);
  }

private:
  ::slam_toolbox::msg::GraphEdge msg_;
};

class Init_GraphEdge_source_id
{
public:
  Init_GraphEdge_source_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphEdge_target_id source_id(::slam_toolbox::msg::GraphEdge::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_GraphEdge_target_id(msg_);
  }

private:
  ::slam_toolbox::msg::GraphEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::GraphEdge>()
{
  return slam_toolbox::msg::builder::Init_GraphEdge_source_id();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_
