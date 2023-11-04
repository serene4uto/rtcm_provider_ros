// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rtcm_msgs:msg/Rtcm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rtcm_msgs/msg/detail/rtcm__rosidl_typesupport_introspection_c.h"
#include "rtcm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rtcm_msgs/msg/detail/rtcm__functions.h"
#include "rtcm_msgs/msg/detail/rtcm__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rtcm_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Rtcm__rosidl_typesupport_introspection_c__Rtcm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rtcm_msgs__msg__Rtcm__init(message_memory);
}

void Rtcm__rosidl_typesupport_introspection_c__Rtcm_fini_function(void * message_memory)
{
  rtcm_msgs__msg__Rtcm__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcm_msgs__msg__Rtcm, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtcm_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rtcm_msgs__msg__Rtcm, rtcm_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_members = {
  "rtcm_msgs__msg",  // message namespace
  "Rtcm",  // message name
  2,  // number of fields
  sizeof(rtcm_msgs__msg__Rtcm),
  Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_member_array,  // message members
  Rtcm__rosidl_typesupport_introspection_c__Rtcm_init_function,  // function to initialize message memory (memory has to be allocated)
  Rtcm__rosidl_typesupport_introspection_c__Rtcm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_type_support_handle = {
  0,
  &Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rtcm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rtcm_msgs, msg, Rtcm)() {
  Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_type_support_handle.typesupport_identifier) {
    Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Rtcm__rosidl_typesupport_introspection_c__Rtcm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
