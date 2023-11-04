// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtcm_msgs:msg/Rtcm.idl
// generated code does not contain a copyright notice
#include "rtcm_msgs/msg/detail/rtcm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `rtcm_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rtcm_msgs__msg__Rtcm__init(rtcm_msgs__msg__Rtcm * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rtcm_msgs__msg__Rtcm__fini(msg);
    return false;
  }
  // rtcm_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->rtcm_data, 0)) {
    rtcm_msgs__msg__Rtcm__fini(msg);
    return false;
  }
  return true;
}

void
rtcm_msgs__msg__Rtcm__fini(rtcm_msgs__msg__Rtcm * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rtcm_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->rtcm_data);
}

bool
rtcm_msgs__msg__Rtcm__are_equal(const rtcm_msgs__msg__Rtcm * lhs, const rtcm_msgs__msg__Rtcm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // rtcm_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->rtcm_data), &(rhs->rtcm_data)))
  {
    return false;
  }
  return true;
}

bool
rtcm_msgs__msg__Rtcm__copy(
  const rtcm_msgs__msg__Rtcm * input,
  rtcm_msgs__msg__Rtcm * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // rtcm_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->rtcm_data), &(output->rtcm_data)))
  {
    return false;
  }
  return true;
}

rtcm_msgs__msg__Rtcm *
rtcm_msgs__msg__Rtcm__create()
{
  rtcm_msgs__msg__Rtcm * msg = (rtcm_msgs__msg__Rtcm *)malloc(sizeof(rtcm_msgs__msg__Rtcm));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtcm_msgs__msg__Rtcm));
  bool success = rtcm_msgs__msg__Rtcm__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rtcm_msgs__msg__Rtcm__destroy(rtcm_msgs__msg__Rtcm * msg)
{
  if (msg) {
    rtcm_msgs__msg__Rtcm__fini(msg);
  }
  free(msg);
}


bool
rtcm_msgs__msg__Rtcm__Sequence__init(rtcm_msgs__msg__Rtcm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rtcm_msgs__msg__Rtcm * data = NULL;
  if (size) {
    data = (rtcm_msgs__msg__Rtcm *)calloc(size, sizeof(rtcm_msgs__msg__Rtcm));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtcm_msgs__msg__Rtcm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtcm_msgs__msg__Rtcm__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rtcm_msgs__msg__Rtcm__Sequence__fini(rtcm_msgs__msg__Rtcm__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rtcm_msgs__msg__Rtcm__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rtcm_msgs__msg__Rtcm__Sequence *
rtcm_msgs__msg__Rtcm__Sequence__create(size_t size)
{
  rtcm_msgs__msg__Rtcm__Sequence * array = (rtcm_msgs__msg__Rtcm__Sequence *)malloc(sizeof(rtcm_msgs__msg__Rtcm__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rtcm_msgs__msg__Rtcm__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rtcm_msgs__msg__Rtcm__Sequence__destroy(rtcm_msgs__msg__Rtcm__Sequence * array)
{
  if (array) {
    rtcm_msgs__msg__Rtcm__Sequence__fini(array);
  }
  free(array);
}

bool
rtcm_msgs__msg__Rtcm__Sequence__are_equal(const rtcm_msgs__msg__Rtcm__Sequence * lhs, const rtcm_msgs__msg__Rtcm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtcm_msgs__msg__Rtcm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtcm_msgs__msg__Rtcm__Sequence__copy(
  const rtcm_msgs__msg__Rtcm__Sequence * input,
  rtcm_msgs__msg__Rtcm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtcm_msgs__msg__Rtcm);
    rtcm_msgs__msg__Rtcm * data =
      (rtcm_msgs__msg__Rtcm *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtcm_msgs__msg__Rtcm__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rtcm_msgs__msg__Rtcm__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtcm_msgs__msg__Rtcm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
