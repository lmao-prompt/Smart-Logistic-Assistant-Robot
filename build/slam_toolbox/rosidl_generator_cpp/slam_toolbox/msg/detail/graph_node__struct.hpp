// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:msg/GraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/graph_node.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__slam_toolbox__msg__GraphNode __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__msg__GraphNode __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphNode_
{
  using Type = GraphNode_<ContainerAllocator>;

  explicit GraphNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
    }
  }

  explicit GraphNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
    }
  }

  // field types and members
  using _node_id_type =
    int32_t;
  _node_id_type node_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__node_id(
    const int32_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::msg::GraphNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::msg::GraphNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::GraphNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::GraphNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__msg__GraphNode
    std::shared_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__msg__GraphNode
    std::shared_ptr<slam_toolbox::msg::GraphNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphNode_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphNode_

// alias to use template instance with default allocator
using GraphNode =
  slam_toolbox::msg::GraphNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__GRAPH_NODE__STRUCT_HPP_
