// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtcm_msgs:msg/Rtcm.idl
// generated code does not contain a copyright notice

#ifndef RTCM_MSGS__MSG__DETAIL__RTCM__BUILDER_HPP_
#define RTCM_MSGS__MSG__DETAIL__RTCM__BUILDER_HPP_

#include "rtcm_msgs/msg/detail/rtcm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rtcm_msgs
{

namespace msg
{

namespace builder
{

class Init_Rtcm_rtcm_data
{
public:
  explicit Init_Rtcm_rtcm_data(::rtcm_msgs::msg::Rtcm & msg)
  : msg_(msg)
  {}
  ::rtcm_msgs::msg::Rtcm rtcm_data(::rtcm_msgs::msg::Rtcm::_rtcm_data_type arg)
  {
    msg_.rtcm_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtcm_msgs::msg::Rtcm msg_;
};

class Init_Rtcm_header
{
public:
  Init_Rtcm_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rtcm_rtcm_data header(::rtcm_msgs::msg::Rtcm::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Rtcm_rtcm_data(msg_);
  }

private:
  ::rtcm_msgs::msg::Rtcm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtcm_msgs::msg::Rtcm>()
{
  return rtcm_msgs::msg::builder::Init_Rtcm_header();
}

}  // namespace rtcm_msgs

#endif  // RTCM_MSGS__MSG__DETAIL__RTCM__BUILDER_HPP_
