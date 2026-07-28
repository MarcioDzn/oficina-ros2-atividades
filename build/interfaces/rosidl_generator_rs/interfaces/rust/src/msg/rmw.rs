#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__ActuatorCommand() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__ActuatorCommand__init(msg: *mut ActuatorCommand) -> bool;
    fn interfaces__msg__ActuatorCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorCommand>, size: usize) -> bool;
    fn interfaces__msg__ActuatorCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorCommand>);
    fn interfaces__msg__ActuatorCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorCommand>) -> bool;
}

// Corresponds to interfaces__msg__ActuatorCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goals: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for ActuatorCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__ActuatorCommand__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__ActuatorCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorCommand where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/ActuatorCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__ActuatorCommand() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__ActuatorState() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__msg__ActuatorState__init(msg: *mut ActuatorState) -> bool;
    fn interfaces__msg__ActuatorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorState>, size: usize) -> bool;
    fn interfaces__msg__ActuatorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorState>);
    fn interfaces__msg__ActuatorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorState>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorState>) -> bool;
}

// Corresponds to interfaces__msg__ActuatorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for ActuatorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__msg__ActuatorState__init(&mut msg as *mut _) {
        panic!("Call to interfaces__msg__ActuatorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__msg__ActuatorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorState where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/msg/ActuatorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__msg__ActuatorState() }
  }
}


