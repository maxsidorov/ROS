// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_service_interfaces:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_service_interfaces/srv/detail/set_velocity__struct.h"
#include "my_service_interfaces/srv/detail/set_velocity__type_support.h"
#include "my_service_interfaces/srv/detail/set_velocity__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_service_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetVelocity_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVelocity_Request_type_support_ids_t;

static const _SetVelocity_Request_type_support_ids_t _SetVelocity_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetVelocity_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVelocity_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVelocity_Request_type_support_symbol_names_t _SetVelocity_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_interfaces, srv, SetVelocity_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_interfaces, srv, SetVelocity_Request)),
  }
};

typedef struct _SetVelocity_Request_type_support_data_t
{
  void * data[2];
} _SetVelocity_Request_type_support_data_t;

static _SetVelocity_Request_type_support_data_t _SetVelocity_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVelocity_Request_message_typesupport_map = {
  2,
  "my_service_interfaces",
  &_SetVelocity_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetVelocity_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetVelocity_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVelocity_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVelocity_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_service_interfaces__srv__SetVelocity_Request__get_type_hash,
  &my_service_interfaces__srv__SetVelocity_Request__get_type_description,
  &my_service_interfaces__srv__SetVelocity_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_service_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_service_interfaces, srv, SetVelocity_Request)() {
  return &::my_service_interfaces::srv::rosidl_typesupport_c::SetVelocity_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__struct.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__type_support.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_service_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetVelocity_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVelocity_Response_type_support_ids_t;

static const _SetVelocity_Response_type_support_ids_t _SetVelocity_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetVelocity_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVelocity_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVelocity_Response_type_support_symbol_names_t _SetVelocity_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_interfaces, srv, SetVelocity_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_interfaces, srv, SetVelocity_Response)),
  }
};

typedef struct _SetVelocity_Response_type_support_data_t
{
  void * data[2];
} _SetVelocity_Response_type_support_data_t;

static _SetVelocity_Response_type_support_data_t _SetVelocity_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVelocity_Response_message_typesupport_map = {
  2,
  "my_service_interfaces",
  &_SetVelocity_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetVelocity_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetVelocity_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVelocity_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVelocity_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_service_interfaces__srv__SetVelocity_Response__get_type_hash,
  &my_service_interfaces__srv__SetVelocity_Response__get_type_description,
  &my_service_interfaces__srv__SetVelocity_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_service_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_service_interfaces, srv, SetVelocity_Response)() {
  return &::my_service_interfaces::srv::rosidl_typesupport_c::SetVelocity_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__struct.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__type_support.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_service_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetVelocity_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVelocity_Event_type_support_ids_t;

static const _SetVelocity_Event_type_support_ids_t _SetVelocity_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetVelocity_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVelocity_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVelocity_Event_type_support_symbol_names_t _SetVelocity_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_interfaces, srv, SetVelocity_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_interfaces, srv, SetVelocity_Event)),
  }
};

typedef struct _SetVelocity_Event_type_support_data_t
{
  void * data[2];
} _SetVelocity_Event_type_support_data_t;

static _SetVelocity_Event_type_support_data_t _SetVelocity_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVelocity_Event_message_typesupport_map = {
  2,
  "my_service_interfaces",
  &_SetVelocity_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetVelocity_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetVelocity_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetVelocity_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVelocity_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &my_service_interfaces__srv__SetVelocity_Event__get_type_hash,
  &my_service_interfaces__srv__SetVelocity_Event__get_type_description,
  &my_service_interfaces__srv__SetVelocity_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_service_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_service_interfaces, srv, SetVelocity_Event)() {
  return &::my_service_interfaces::srv::rosidl_typesupport_c::SetVelocity_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_service_interfaces/srv/detail/set_velocity__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace my_service_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetVelocity_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetVelocity_type_support_ids_t;

static const _SetVelocity_type_support_ids_t _SetVelocity_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetVelocity_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetVelocity_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetVelocity_type_support_symbol_names_t _SetVelocity_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_service_interfaces, srv, SetVelocity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_service_interfaces, srv, SetVelocity)),
  }
};

typedef struct _SetVelocity_type_support_data_t
{
  void * data[2];
} _SetVelocity_type_support_data_t;

static _SetVelocity_type_support_data_t _SetVelocity_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetVelocity_service_typesupport_map = {
  2,
  "my_service_interfaces",
  &_SetVelocity_service_typesupport_ids.typesupport_identifier[0],
  &_SetVelocity_service_typesupport_symbol_names.symbol_name[0],
  &_SetVelocity_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetVelocity_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetVelocity_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetVelocity_Request_message_type_support_handle,
  &SetVelocity_Response_message_type_support_handle,
  &SetVelocity_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_service_interfaces,
    srv,
    SetVelocity
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    my_service_interfaces,
    srv,
    SetVelocity
  ),
  &my_service_interfaces__srv__SetVelocity__get_type_hash,
  &my_service_interfaces__srv__SetVelocity__get_type_description,
  &my_service_interfaces__srv__SetVelocity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace my_service_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_service_interfaces, srv, SetVelocity)() {
  return &::my_service_interfaces::srv::rosidl_typesupport_c::SetVelocity_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
