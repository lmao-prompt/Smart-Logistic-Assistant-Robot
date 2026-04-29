// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:msg/LoopClosureEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/loop_closure_event.hpp"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_HPP_
#define SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__slam_toolbox__msg__LoopClosureEvent __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__msg__LoopClosureEvent __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoopClosureEvent_
{
  using Type = LoopClosureEvent_<ContainerAllocator>;

  explicit LoopClosureEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit LoopClosureEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__msg__LoopClosureEvent
    std::shared_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__msg__LoopClosureEvent
    std::shared_ptr<slam_toolbox::msg::LoopClosureEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoopClosureEvent_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoopClosureEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoopClosureEvent_

// alias to use template instance with default allocator
using LoopClosureEvent =
  slam_toolbox::msg::LoopClosureEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOOP_CLOSURE_EVENT__STRUCT_HPP_
