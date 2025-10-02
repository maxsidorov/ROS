// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_service_interfaces:srv/SetVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_service_interfaces/srv/set_velocity.h"


#ifndef MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
#define MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetVelocity in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__SetVelocity_Request
{
  float linear;
  float angular;
} my_service_interfaces__srv__SetVelocity_Request;

// Struct for a sequence of my_service_interfaces__srv__SetVelocity_Request.
typedef struct my_service_interfaces__srv__SetVelocity_Request__Sequence
{
  my_service_interfaces__srv__SetVelocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__SetVelocity_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetVelocity in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__SetVelocity_Response
{
  bool success;
  rosidl_runtime_c__String message;
} my_service_interfaces__srv__SetVelocity_Response;

// Struct for a sequence of my_service_interfaces__srv__SetVelocity_Response.
typedef struct my_service_interfaces__srv__SetVelocity_Response__Sequence
{
  my_service_interfaces__srv__SetVelocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__SetVelocity_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_service_interfaces__srv__SetVelocity_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_service_interfaces__srv__SetVelocity_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetVelocity in the package my_service_interfaces.
typedef struct my_service_interfaces__srv__SetVelocity_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_service_interfaces__srv__SetVelocity_Request__Sequence request;
  my_service_interfaces__srv__SetVelocity_Response__Sequence response;
} my_service_interfaces__srv__SetVelocity_Event;

// Struct for a sequence of my_service_interfaces__srv__SetVelocity_Event.
typedef struct my_service_interfaces__srv__SetVelocity_Event__Sequence
{
  my_service_interfaces__srv__SetVelocity_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_service_interfaces__srv__SetVelocity_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SERVICE_INTERFACES__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
