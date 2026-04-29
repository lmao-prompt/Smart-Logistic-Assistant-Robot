// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/localized_laser_scan.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__BUILDER_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "slam_toolbox/msg/detail/localized_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace slam_toolbox
{

namespace msg
{

namespace builder
{

class Init_LocalizedLaserScan_pose
{
public:
  explicit Init_LocalizedLaserScan_pose(::slam_toolbox::msg::LocalizedLaserScan & msg)
  : msg_(msg)
  {}
  ::slam_toolbox::msg::LocalizedLaserScan pose(::slam_toolbox::msg::LocalizedLaserScan::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::msg::LocalizedLaserScan msg_;
};

class Init_LocalizedLaserScan_scanner_offset
{
public:
  explicit Init_LocalizedLaserScan_scanner_offset(::slam_toolbox::msg::LocalizedLaserScan & msg)
  : msg_(msg)
  {}
  Init_LocalizedLaserScan_pose scanner_offset(::slam_toolbox::msg::LocalizedLaserScan::_scanner_offset_type arg)
  {
    msg_.scanner_offset = std::move(arg);
    return Init_LocalizedLaserScan_pose(msg_);
  }

private:
  ::slam_toolbox::msg::LocalizedLaserScan msg_;
};

class Init_LocalizedLaserScan_scan
{
public:
  Init_LocalizedLaserScan_scan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizedLaserScan_scanner_offset scan(::slam_toolbox::msg::LocalizedLaserScan::_scan_type arg)
  {
    msg_.scan = std::move(arg);
    return Init_LocalizedLaserScan_scanner_offset(msg_);
  }

private:
  ::slam_toolbox::msg::LocalizedLaserScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::msg::LocalizedLaserScan>()
{
  return slam_toolbox::msg::builder::Init_LocalizedLaserScan_scan();
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__BUILDER_HPP_
