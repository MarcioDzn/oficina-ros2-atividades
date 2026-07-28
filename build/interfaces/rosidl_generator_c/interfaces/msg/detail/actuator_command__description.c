// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/ActuatorCommand.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/actuator_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__ActuatorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xce, 0x3f, 0x32, 0x23, 0x57, 0x28, 0x19,
      0x88, 0x92, 0x7d, 0xdb, 0xc3, 0x4c, 0xd0, 0xd6,
      0x25, 0x91, 0xfd, 0x83, 0x4b, 0x3d, 0xe7, 0xae,
      0x61, 0xa1, 0x49, 0x45, 0xec, 0x6c, 0xa9, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__ActuatorCommand__TYPE_NAME[] = "interfaces/msg/ActuatorCommand";

// Define type names, field names, and default values
static char interfaces__msg__ActuatorCommand__FIELD_NAME__names[] = "names";
static char interfaces__msg__ActuatorCommand__FIELD_NAME__goals[] = "goals";

static rosidl_runtime_c__type_description__Field interfaces__msg__ActuatorCommand__FIELDS[] = {
  {
    {interfaces__msg__ActuatorCommand__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__ActuatorCommand__FIELD_NAME__goals, 5, 5},
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
interfaces__msg__ActuatorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__ActuatorCommand__TYPE_NAME, 30, 30},
      {interfaces__msg__ActuatorCommand__FIELDS, 2, 2},
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
  "int16[] goals";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__ActuatorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__ActuatorCommand__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__ActuatorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__ActuatorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
