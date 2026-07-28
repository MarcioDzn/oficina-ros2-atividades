// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/ActuatorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/actuator_command.hpp"


#ifndef INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/actuator_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuatorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goals
  {
    if (msg.goals.size() == 0) {
      out << "goals: []";
    } else {
      out << "goals: [";
      size_t pending_items = msg.goals.size();
      for (auto item : msg.goals) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals.size() == 0) {
      out << "goals: []\n";
    } else {
      out << "goals:\n";
      for (auto item : msg.goals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::ActuatorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::ActuatorCommand & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::ActuatorCommand>()
{
  return "interfaces::msg::ActuatorCommand";
}

template<>
inline const char * name<interfaces::msg::ActuatorCommand>()
{
  return "interfaces/msg/ActuatorCommand";
}

template<>
struct has_fixed_size<interfaces::msg::ActuatorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::ActuatorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::ActuatorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__ACTUATOR_COMMAND__TRAITS_HPP_
