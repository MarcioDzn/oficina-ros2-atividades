// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/ActuatorCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/actuator_command__functions.h"
#include "interfaces/msg/detail/actuator_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActuatorCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::ActuatorCommand(_init);
}

void ActuatorCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::ActuatorCommand *>(message_memory);
  typed_message->~ActuatorCommand();
}

size_t size_function__ActuatorCommand__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCommand__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCommand__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCommand__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ActuatorCommand__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCommand__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ActuatorCommand__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCommand__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCommand__goals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCommand__goals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCommand__goals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCommand__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ActuatorCommand__goals(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCommand__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ActuatorCommand__goals(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCommand__goals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorCommand_message_member_array[2] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ActuatorCommand, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCommand__names,  // size() function pointer
    get_const_function__ActuatorCommand__names,  // get_const(index) function pointer
    get_function__ActuatorCommand__names,  // get(index) function pointer
    fetch_function__ActuatorCommand__names,  // fetch(index, &value) function pointer
    assign_function__ActuatorCommand__names,  // assign(index, value) function pointer
    resize_function__ActuatorCommand__names  // resize(index) function pointer
  },
  {
    "goals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::ActuatorCommand, goals),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCommand__goals,  // size() function pointer
    get_const_function__ActuatorCommand__goals,  // get_const(index) function pointer
    get_function__ActuatorCommand__goals,  // get(index) function pointer
    fetch_function__ActuatorCommand__goals,  // fetch(index, &value) function pointer
    assign_function__ActuatorCommand__goals,  // assign(index, value) function pointer
    resize_function__ActuatorCommand__goals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorCommand_message_members = {
  "interfaces::msg",  // message namespace
  "ActuatorCommand",  // message name
  2,  // number of fields
  sizeof(interfaces::msg::ActuatorCommand),
  false,  // has_any_key_member_
  ActuatorCommand_message_member_array,  // message members
  ActuatorCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorCommand_message_members,
  get_message_typesupport_handle_function,
  &interfaces__msg__ActuatorCommand__get_type_hash,
  &interfaces__msg__ActuatorCommand__get_type_description,
  &interfaces__msg__ActuatorCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::ActuatorCommand>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::ActuatorCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, ActuatorCommand)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::ActuatorCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
