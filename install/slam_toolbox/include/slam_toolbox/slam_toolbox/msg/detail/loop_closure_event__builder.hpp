// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/LoopClosureEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/loop_closure_event.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/loop_closure_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_LoopClosureEvent_stamp
{
public:
  Init_LoopClosureEvent_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::slam_toolbox::msg::LoopClosureEvent stamp(::slam_toolbox::msg::LoopClosureEvent::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::LoopClosureEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::LoopClosureEvent>()
{
  return slam_toolbox::msg::builder::Init_LoopClosureEvent_stamp();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__BUILDER_HPP_
