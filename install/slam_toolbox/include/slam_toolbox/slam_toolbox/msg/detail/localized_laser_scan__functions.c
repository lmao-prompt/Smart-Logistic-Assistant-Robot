// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from slam_toolbox:msg/LocalizedLaserScan.idl
// generated code does not contain a copyright notice
#include "slam_toolbox/msg/detail/localized_laser_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `scan`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"
// Member `scanner_offset`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"

bool
slam_toolbox__msg__LocalizedLaserScan__init(slam_toolbox__msg__LocalizedLaserScan * msg)
{
  if (!msg) {
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__init(&msg->scan)) {
    slam_toolbox__msg__LocalizedLaserScan__fini(msg);
    return false;
  }
  // scanner_offset
  if (!geometry_msgs__msg__TransformStamped__init(&msg->scanner_offset)) {
    slam_toolbox__msg__LocalizedLaserScan__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__init(&msg->pose)) {
    slam_toolbox__msg__LocalizedLaserScan__fini(msg);
    return false;
  }
  return true;
}

void
slam_toolbox__msg__LocalizedLaserScan__fini(slam_toolbox__msg__LocalizedLaserScan * msg)
{
  if (!msg) {
    return;
  }
  // scan
  sensor_msgs__msg__LaserScan__fini(&msg->scan);
  // scanner_offset
  geometry_msgs__msg__TransformStamped__fini(&msg->scanner_offset);
  // pose
  geometry_msgs__msg__PoseWithCovarianceStamped__fini(&msg->pose);
}

bool
slam_toolbox__msg__LocalizedLaserScan__are_equal(const slam_toolbox__msg__LocalizedLaserScan * lhs, const slam_toolbox__msg__LocalizedLaserScan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__are_equal(
      &(lhs->scan), &(rhs->scan)))
  {
    return false;
  }
  // scanner_offset
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->scanner_offset), &(rhs->scanner_offset)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
slam_toolbox__msg__LocalizedLaserScan__copy(
  const slam_toolbox__msg__LocalizedLaserScan * input,
  slam_toolbox__msg__LocalizedLaserScan * output)
{
  if (!input || !output) {
    return false;
  }
  // scan
  if (!sensor_msgs__msg__LaserScan__copy(
      &(input->scan), &(output->scan)))
  {
    return false;
  }
  // scanner_offset
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->scanner_offset), &(output->scanner_offset)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

slam_toolbox__msg__LocalizedLaserScan *
slam_toolbox__msg__LocalizedLaserScan__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__LocalizedLaserScan * msg = (slam_toolbox__msg__LocalizedLaserScan *)allocator.allocate(sizeof(slam_toolbox__msg__LocalizedLaserScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(slam_toolbox__msg__LocalizedLaserScan));
  bool success = slam_toolbox__msg__LocalizedLaserScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
slam_toolbox__msg__LocalizedLaserScan__destroy(slam_toolbox__msg__LocalizedLaserScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    slam_toolbox__msg__LocalizedLaserScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
slam_toolbox__msg__LocalizedLaserScan__Sequence__init(slam_toolbox__msg__LocalizedLaserScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__LocalizedLaserScan * data = NULL;

  if (size) {
    data = (slam_toolbox__msg__LocalizedLaserScan *)allocator.zero_allocate(size, sizeof(slam_toolbox__msg__LocalizedLaserScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = slam_toolbox__msg__LocalizedLaserScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        slam_toolbox__msg__LocalizedLaserScan__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
slam_toolbox__msg__LocalizedLaserScan__Sequence__fini(slam_toolbox__msg__LocalizedLaserScan__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      slam_toolbox__msg__LocalizedLaserScan__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

slam_toolbox__msg__LocalizedLaserScan__Sequence *
slam_toolbox__msg__LocalizedLaserScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__LocalizedLaserScan__Sequence * array = (slam_toolbox__msg__LocalizedLaserScan__Sequence *)allocator.allocate(sizeof(slam_toolbox__msg__LocalizedLaserScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = slam_toolbox__msg__LocalizedLaserScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
slam_toolbox__msg__LocalizedLaserScan__Sequence__destroy(slam_toolbox__msg__LocalizedLaserScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    slam_toolbox__msg__LocalizedLaserScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
slam_toolbox__msg__LocalizedLaserScan__Sequence__are_equal(const slam_toolbox__msg__LocalizedLaserScan__Sequence * lhs, const slam_toolbox__msg__LocalizedLaserScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!slam_toolbox__msg__LocalizedLaserScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
slam_toolbox__msg__LocalizedLaserScan__Sequence__copy(
  const slam_toolbox__msg__LocalizedLaserScan__Sequence * input,
  slam_toolbox__msg__LocalizedLaserScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(slam_toolbox__msg__LocalizedLaserScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    slam_toolbox__msg__LocalizedLaserScan * data =
      (slam_toolbox__msg__LocalizedLaserScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!slam_toolbox__msg__LocalizedLaserScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          slam_toolbox__msg__LocalizedLaserScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!slam_toolbox__msg__LocalizedLaserScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
