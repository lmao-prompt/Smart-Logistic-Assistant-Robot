// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:msg/LoopClosureEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/loop_closure_event.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__TRAITS_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "slam_toolbox/msg/detail/loop_closure_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace slam_toolbox
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoopClosureEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoopClosureEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoopClosureEvent & msg, bool use_flow_style = false)
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
  const slam_toolbox::msg::LoopClosureEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  slam_toolbox::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use slam_toolbox::msg::to_yaml() instead")]]
inline std::string to_yaml(const slam_toolbox::msg::LoopClosureEvent & msg)
{
  return slam_toolbox::msg::to_yaml(msg);
}

template<>
inline const char * data_type<slam_toolbox::msg::LoopClosureEvent>()
{
  return "slam_toolbox::msg::LoopClosureEvent";
}

template<>
inline const char * name<slam_toolbox::msg::LoopClosureEvent>()
{
  return "slam_toolbox/msg/LoopClosureEvent";
}

template<>
struct has_fixed_size<slam_toolbox::msg::LoopClosureEvent>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<slam_toolbox::msg::LoopClosureEvent>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<slam_toolbox::msg::LoopClosureEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__TRAITS_HPP_
