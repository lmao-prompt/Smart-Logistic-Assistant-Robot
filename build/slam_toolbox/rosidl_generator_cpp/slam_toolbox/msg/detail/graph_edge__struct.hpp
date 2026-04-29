// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:msg/GraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_edge.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'relative_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__slam_toolbox__msg__GraphEdge __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__msg__GraphEdge __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphEdge_
{
  using Type = GraphEdge_<ContainerAllocator>;

  explicit GraphEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_id = 0l;
      this->target_id = 0l;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit GraphEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_pose(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_id = 0l;
      this->target_id = 0l;
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _source_id_type =
    int32_t;
  _source_id_type source_id;
  using _target_id_type =
    int32_t;
  _target_id_type target_id;
  using _relative_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _relative_pose_type relative_pose;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__source_id(
    const int32_t & _arg)
  {
    this->source_id = _arg;
    return *this;
  }
  Type & set__target_id(
    const int32_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__relative_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->relative_pose = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::msg::GraphEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::msg::GraphEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::GraphEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::GraphEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__msg__GraphEdge
    std::shared_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__msg__GraphEdge
    std::shared_ptr<slam_toolbox::msg::GraphEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphEdge_ & other) const
  {
    if (this->source_id != other.source_id) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->relative_pose != other.relative_pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphEdge_

// alias to use template instance with default allocator
using GraphEdge =
  slam_toolbox::msg::GraphEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_
