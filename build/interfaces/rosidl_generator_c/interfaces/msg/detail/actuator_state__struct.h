// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ActuatorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/actuator_state.h"


#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_STATE__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ACTUATOR_STATE__STRUCT_H_

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
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorState in the package interfaces.
typedef struct interfaces__msg__ActuatorState
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__int16__Sequence positions;
} interfaces__msg__ActuatorState;

// Struct for a sequence of interfaces__msg__ActuatorState.
typedef struct interfaces__msg__ActuatorState__Sequence
{
  interfaces__msg__ActuatorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ActuatorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_STATE__STRUCT_H_
