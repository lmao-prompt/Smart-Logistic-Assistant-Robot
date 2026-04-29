// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from slam_toolbox:msg/GraphEdge.idl
// generated code does not contain a copyright notice
#include "slam_toolbox/msg/detail/graph_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `relative_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
slam_toolbox__msg__GraphEdge__init(slam_toolbox__msg__GraphEdge * msg)
{
  if (!msg) {
    return false;
  }
  // source_id
  // target_id
  // relative_pose
  if (!geometry_msgs__msg__Pose__init(&msg->relative_pose)) {
    slam_toolbox__msg__GraphEdge__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
slam_toolbox__msg__GraphEdge__fini(slam_toolbox__msg__GraphEdge * msg)
{
  if (!msg) {
    return;
  }
  // source_id
  // target_id
  // relative_pose
  geometry_msgs__msg__Pose__fini(&msg->relative_pose);
  // covariance
}

bool
slam_toolbox__msg__GraphEdge__are_equal(const slam_toolbox__msg__GraphEdge * lhs, const slam_toolbox__msg__GraphEdge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source_id
  if (lhs->source_id != rhs->source_id) {
    return false;
  }
  // target_id
  if (lhs->target_id != rhs->target_id) {
    return false;
  }
  // relative_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->relative_pose), &(rhs->relative_pose)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
slam_toolbox__msg__GraphEdge__copy(
  const slam_toolbox__msg__GraphEdge * input,
  slam_toolbox__msg__GraphEdge * output)
{
  if (!input || !output) {
    return false;
  }
  // source_id
  output->source_id = input->source_id;
  // target_id
  output->target_id = input->target_id;
  // relative_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->relative_pose), &(output->relative_pose)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

slam_toolbox__msg__GraphEdge *
slam_toolbox__msg__GraphEdge__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__GraphEdge * msg = (slam_toolbox__msg__GraphEdge *)allocator.allocate(sizeof(slam_toolbox__msg__GraphEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(slam_toolbox__msg__GraphEdge));
  bool success = slam_toolbox__msg__GraphEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
slam_toolbox__msg__GraphEdge__destroy(slam_toolbox__msg__GraphEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    slam_toolbox__msg__GraphEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
slam_toolbox__msg__GraphEdge__Sequence__init(slam_toolbox__msg__GraphEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__GraphEdge * data = NULL;

  if (size) {
    data = (slam_toolbox__msg__GraphEdge *)allocator.zero_allocate(size, sizeof(slam_toolbox__msg__GraphEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = slam_toolbox__msg__GraphEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        slam_toolbox__msg__GraphEdge__fini(&data[i - 1]);
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
slam_toolbox__msg__GraphEdge__Sequence__fini(slam_toolbox__msg__GraphEdge__Sequence * array)
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
      slam_toolbox__msg__GraphEdge__fini(&array->data[i]);
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

slam_toolbox__msg__GraphEdge__Sequence *
slam_toolbox__msg__GraphEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  slam_toolbox__msg__GraphEdge__Sequence * array = (slam_toolbox__msg__GraphEdge__Sequence *)allocator.allocate(sizeof(slam_toolbox__msg__GraphEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = slam_toolbox__msg__GraphEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
slam_toolbox__msg__GraphEdge__Sequence__destroy(slam_toolbox__msg__GraphEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    slam_toolbox__msg__GraphEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
slam_toolbox__msg__GraphEdge__Sequence__are_equal(const slam_toolbox__msg__GraphEdge__Sequence * lhs, const slam_toolbox__msg__GraphEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!slam_toolbox__msg__GraphEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
slam_toolbox__msg__GraphEdge__Sequence__copy(
  const slam_toolbox__msg__GraphEdge__Sequence * input,
  slam_toolbox__msg__GraphEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(slam_toolbox__msg__GraphEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    slam_toolbox__msg__GraphEdge * data =
      (slam_toolbox__msg__GraphEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!slam_toolbox__msg__GraphEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          slam_toolbox__msg__GraphEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!slam_toolbox__msg__GraphEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
