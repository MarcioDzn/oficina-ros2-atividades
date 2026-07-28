// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/ActuatorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/actuator_command.h"


#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__STRUCT_H_
#define INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__STRUCT_H_

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
// Member 'goals'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorCommand in the package interfaces.
typedef struct interfaces__msg__ActuatorCommand
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__int16__Sequence goals;
} interfaces__msg__ActuatorCommand;

// Struct for a sequence of interfaces__msg__ActuatorCommand.
typedef struct interfaces__msg__ActuatorCommand__Sequence
{
  interfaces__msg__ActuatorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__ActuatorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__STRUCT_H_
