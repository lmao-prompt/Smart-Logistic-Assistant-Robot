// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/localized_laser_scan.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"
// Member 'scanner_offset'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__slam_toolbox__msg__LocalizedLaserScan __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__msg__LocalizedLaserScan __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizedLaserScan_
{
  using Type = LocalizedLaserScan_<ContainerAllocator>;

  explicit LocalizedLaserScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan(_init),
    scanner_offset(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit LocalizedLaserScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan(_alloc, _init),
    scanner_offset(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _scan_type =
    sensor_msgs::msg::LaserScan_<ContainerAllocator>;
  _scan_type scan;
  using _scanner_offset_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _scanner_offset_type scanner_offset;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__scan(
    const sensor_msgs::msg::LaserScan_<ContainerAllocator> & _arg)
  {
    this->scan = _arg;
    return *this;
  }
  Type & set__scanner_offset(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->scanner_offset = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__msg__LocalizedLaserScan
    std::shared_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__msg__LocalizedLaserScan
    std::shared_ptr<slam_toolbox::msg::LocalizedLaserScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizedLaserScan_ & other) const
  {
    if (this->scan != other.scan) {
      return false;
    }
    if (this->scanner_offset != other.scanner_offset) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizedLaserScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizedLaserScan_

// alias to use template instance with default allocator
using LocalizedLaserScan =
  slam_toolbox::msg::LocalizedLaserScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_HPP_
