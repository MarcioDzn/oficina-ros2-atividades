// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ActuatorState.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/actuator_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ActuatorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0xd8, 0x8d, 0xf3, 0x01, 0xb8, 0x6c, 0xcc,
      0x58, 0x68, 0xd3, 0x3b, 0x6a, 0xed, 0xf2, 0x99,
      0x44, 0x02, 0xb6, 0xd4, 0xa0, 0x25, 0x87, 0xda,
      0x3d, 0x31, 0x95, 0x40, 0x6d, 0x46, 0xdc, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ActuatorState__TYPE_NAME[] = "interfaces/msg/ActuatorState";

// Define type names, field names, and default values
static char interfaces__msg__ActuatorState__FIELD_NAME__names[] = "names";
static char interfaces__msg__ActuatorState__FIELD_NAME__positions[] = "positions";

static rosidl_runtime_c__type_description__Field interfaces__msg__ActuatorState__FIELDS[] = {
  {
    {interfaces__msg__ActuatorState__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ActuatorState__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__ActuatorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ActuatorState__TYPE_NAME, 28, 28},
      {interfaces__msg__ActuatorState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] names\n"
  "int16[] positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ActuatorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ActuatorState__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ActuatorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ActuatorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
