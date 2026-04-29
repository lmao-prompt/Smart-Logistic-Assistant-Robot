// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/NewNodeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/new_node_event.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/new_node_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_NewNodeEvent_edge
{
public:
  explicit Init_NewNodeEvent_edge(::slam_toolbox::msg::NewNodeEvent & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::msg::NewNodeEvent edge(::slam_toolbox::msg::NewNodeEvent::_edge_type arg)
  {
    msg_.edge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::NewNodeEvent msg_;
};

class Init_NewNodeEvent_pose
{
public:
  explicit Init_NewNodeEvent_pose(::slam_toolbox::msg::NewNodeEvent & msg)
  : msg_(msg)
  {}
  Init_NewNodeEvent_edge pose(::slam_toolbox::msg::NewNodeEvent::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_NewNodeEvent_edge(msg_);
  }

private:
  ::slam_toolbox::msg::NewNodeEvent msg_;
};

class Init_NewNodeEvent_stamp
{
public:
  explicit Init_NewNodeEvent_stamp(::slam_toolbox::msg::NewNodeEvent & msg)
  : msg_(msg)
  {}
  Init_NewNodeEvent_pose stamp(::slam_toolbox::msg::NewNodeEvent::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_NewNodeEvent_pose(msg_);
  }

private:
  ::slam_toolbox::msg::NewNodeEvent msg_;
};

class Init_NewNodeEvent_new_node_id
{
public:
  Init_NewNodeEvent_new_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewNodeEvent_stamp new_node_id(::slam_toolbox::msg::NewNodeEvent::_new_node_id_type arg)
  {
    msg_.new_node_id = std::move(arg);
    return Init_NewNodeEvent_stamp(msg_);
  }

private:
  ::slam_toolbox::msg::NewNodeEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::NewNodeEvent>()
{
  return slam_toolbox::msg::builder::Init_NewNodeEvent_new_node_id();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__NEW_NODE_EVENT__BUILDER_HPP_
