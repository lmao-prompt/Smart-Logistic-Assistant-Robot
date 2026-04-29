// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "slam_toolbox/msg/localized_laser_scan.h"


#ifndef SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_H_
#define SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__struct.h"
// Member 'scanner_offset'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in msg/LocalizedLaserScan in the package slam_toolbox.
/**
  * Single scan from a planar laser range-finder and the pose of the robot
 */
typedef struct slam_toolbox__msg__LocalizedLaserScan
{
  sensor_msgs__msg__LaserScan scan;
  /// Scanner pose in robot base_frame
  geometry_msgs__msg__TransformStamped scanner_offset;
  /// Robot base_frame pose in a global (map) frame
  geometry_msgs__msg__PoseWithCovarianceStamped pose;
} slam_toolbox__msg__LocalizedLaserScan;

// Struct for a sequence of slam_toolbox__msg__LocalizedLaserScan.
typedef struct slam_toolbox__msg__LocalizedLaserScan__Sequence
{
  slam_toolbox__msg__LocalizedLaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} slam_toolbox__msg__LocalizedLaserScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SLAM_TOOLBOX__MSG__DETAIL__LOCALIZED_LASER_SCAN__STRUCT_H_
