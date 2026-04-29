// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/localized_laser_scan.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__TRAITS_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "slam_toolbox/msg/detail/localized_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__traits.hpp"
// Member 'scanner_offset'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace slam_toolbox
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalizedLaserScan & msg,
  std::ostream & out)
{
  out << "{";
  // member: scan
  {
    out << "scan: ";
    to_flow_style_yaml(msg.scan, out);
    out << ", ";
  }

  // member: scanner_offset
  {
    out << "scanner_offset: ";
    to_flow_style_yaml(msg.scanner_offset, out);
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
  const LocalizedLaserScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan:\n";
    to_block_style_yaml(msg.scan, out, indentation + 2);
  }

  // member: scanner_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_offset:\n";
    to_block_style_yaml(msg.scanner_offset, out, indentation + 2);
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

inline std::string to_yaml(const LocalizedLaserScan & msg, bool use_flow_style = false)
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
  const slam_toolbox::msg::LocalizedLaserScan & msg,
  std::ostream & out, size_t indentation = 0)
{
  slam_toolbox::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use slam_toolbox::msg::to_yaml() instead")]]
inline std::string to_yaml(const slam_toolbox::msg::LocalizedLaserScan & msg)
{
  return slam_toolbox::msg::to_yaml(msg);
}

template<>
inline const char * data_type<slam_toolbox::msg::LocalizedLaserScan>()
{
  return "slam_toolbox::msg::LocalizedLaserScan";
}

template<>
inline const char * name<slam_toolbox::msg::LocalizedLaserScan>()
{
  return "slam_toolbox/msg/LocalizedLaserScan";
}

template<>
struct has_fixed_size<slam_toolbox::msg::LocalizedLaserScan>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_fixed_size<geometry_msgs::msg::TransformStamped>::value && has_fixed_size<sensor_msgs::msg::LaserScan>::value> {};

template<>
struct has_bounded_size<slam_toolbox::msg::LocalizedLaserScan>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_bounded_size<geometry_msgs::msg::TransformStamped>::value && has_bounded_size<sensor_msgs::msg::LaserScan>::value> {};

template<>
struct is_message<slam_toolbox::msg::LocalizedLaserScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__TRAITS_HPP_
