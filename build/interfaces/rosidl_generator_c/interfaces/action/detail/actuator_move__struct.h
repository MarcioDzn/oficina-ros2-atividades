// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:action/ActuatorMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/action/actuator_move.h"


#ifndef INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_H_
#define INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'amplitudes'
// Member 'periods'
// Member 'offsets'
// Member 'phases'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_Goal
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence amplitudes;
  rosidl_runtime_c__double__Sequence periods;
  rosidl_runtime_c__double__Sequence offsets;
  rosidl_runtime_c__double__Sequence phases;
  int32_t samples;
  int32_t loops;
} interfaces__action__ActuatorMove_Goal;

// Struct for a sequence of interfaces__action__ActuatorMove_Goal.
typedef struct interfaces__action__ActuatorMove_Goal__Sequence
{
  interfaces__action__ActuatorMove_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_Result
{
  bool success;
  rosidl_runtime_c__String message;
} interfaces__action__ActuatorMove_Result;

// Struct for a sequence of interfaces__action__ActuatorMove_Result.
typedef struct interfaces__action__ActuatorMove_Result__Sequence
{
  interfaces__action__ActuatorMove_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'current_positions'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_Feedback
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__int16__Sequence current_positions;
} interfaces__action__ActuatorMove_Feedback;

// Struct for a sequence of interfaces__action__ActuatorMove_Feedback.
typedef struct interfaces__action__ActuatorMove_Feedback__Sequence
{
  interfaces__action__ActuatorMove_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interfaces/action/detail/actuator_move__struct.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__ActuatorMove_Goal goal;
} interfaces__action__ActuatorMove_SendGoal_Request;

// Struct for a sequence of interfaces__action__ActuatorMove_SendGoal_Request.
typedef struct interfaces__action__ActuatorMove_SendGoal_Request__Sequence
{
  interfaces__action__ActuatorMove_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interfaces__action__ActuatorMove_SendGoal_Response;

// Struct for a sequence of interfaces__action__ActuatorMove_SendGoal_Response.
typedef struct interfaces__action__ActuatorMove_SendGoal_Response__Sequence
{
  interfaces__action__ActuatorMove_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__ActuatorMove_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__ActuatorMove_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__ActuatorMove_SendGoal_Request__Sequence request;
  interfaces__action__ActuatorMove_SendGoal_Response__Sequence response;
} interfaces__action__ActuatorMove_SendGoal_Event;

// Struct for a sequence of interfaces__action__ActuatorMove_SendGoal_Event.
typedef struct interfaces__action__ActuatorMove_SendGoal_Event__Sequence
{
  interfaces__action__ActuatorMove_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interfaces__action__ActuatorMove_GetResult_Request;

// Struct for a sequence of interfaces__action__ActuatorMove_GetResult_Request.
typedef struct interfaces__action__ActuatorMove_GetResult_Request__Sequence
{
  interfaces__action__ActuatorMove_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interfaces/action/detail/actuator_move__struct.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_GetResult_Response
{
  int8_t status;
  interfaces__action__ActuatorMove_Result result;
} interfaces__action__ActuatorMove_GetResult_Response;

// Struct for a sequence of interfaces__action__ActuatorMove_GetResult_Response.
typedef struct interfaces__action__ActuatorMove_GetResult_Response__Sequence
{
  interfaces__action__ActuatorMove_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces__action__ActuatorMove_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces__action__ActuatorMove_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces__action__ActuatorMove_GetResult_Request__Sequence request;
  interfaces__action__ActuatorMove_GetResult_Response__Sequence response;
} interfaces__action__ActuatorMove_GetResult_Event;

// Struct for a sequence of interfaces__action__ActuatorMove_GetResult_Event.
typedef struct interfaces__action__ActuatorMove_GetResult_Event__Sequence
{
  interfaces__action__ActuatorMove_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interfaces/action/detail/actuator_move__struct.h"

/// Struct defined in action/ActuatorMove in the package interfaces.
typedef struct interfaces__action__ActuatorMove_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interfaces__action__ActuatorMove_Feedback feedback;
} interfaces__action__ActuatorMove_FeedbackMessage;

// Struct for a sequence of interfaces__action__ActuatorMove_FeedbackMessage.
typedef struct interfaces__action__ActuatorMove_FeedbackMessage__Sequence
{
  interfaces__action__ActuatorMove_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__action__ActuatorMove_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__ACTION__DETAIL__ACTUATOR_MOVE__STRUCT_H_
