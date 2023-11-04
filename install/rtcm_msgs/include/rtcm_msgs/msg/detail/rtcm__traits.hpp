// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtcm_msgs:msg/Rtcm.idl
// generated code does not contain a copyright notice

#ifndef RTCM_MSGS__MSG__DETAIL__RTCM__TRAITS_HPP_
#define RTCM_MSGS__MSG__DETAIL__RTCM__TRAITS_HPP_

#include "rtcm_msgs/msg/detail/rtcm__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rtcm_msgs::msg::Rtcm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: rtcm_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rtcm_data.size() == 0) {
      out << "rtcm_data: []\n";
    } else {
      out << "rtcm_data:\n";
      for (auto item : msg.rtcm_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rtcm_msgs::msg::Rtcm & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rtcm_msgs::msg::Rtcm>()
{
  return "rtcm_msgs::msg::Rtcm";
}

template<>
inline const char * name<rtcm_msgs::msg::Rtcm>()
{
  return "rtcm_msgs/msg/Rtcm";
}

template<>
struct has_fixed_size<rtcm_msgs::msg::Rtcm>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtcm_msgs::msg::Rtcm>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtcm_msgs::msg::Rtcm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTCM_MSGS__MSG__DETAIL__RTCM__TRAITS_HPP_
