// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rtcm_msgs:msg/Rtcm.idl
// generated code does not contain a copyright notice

#ifndef RTCM_MSGS__MSG__DETAIL__RTCM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RTCM_MSGS__MSG__DETAIL__RTCM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rtcm_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rtcm_msgs/msg/detail/rtcm__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rtcm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcm_msgs
cdr_serialize(
  const rtcm_msgs::msg::Rtcm & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rtcm_msgs::msg::Rtcm & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcm_msgs
get_serialized_size(
  const rtcm_msgs::msg::Rtcm & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcm_msgs
max_serialized_size_Rtcm(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rtcm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rtcm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rtcm_msgs, msg, Rtcm)();

#ifdef __cplusplus
}
#endif

#endif  // RTCM_MSGS__MSG__DETAIL__RTCM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
