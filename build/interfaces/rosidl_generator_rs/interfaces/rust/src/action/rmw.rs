
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Goal() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_Goal__init(msg: *mut ActuatorMove_Goal) -> bool;
    fn interfaces__action__ActuatorMove_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Goal>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Goal>);
    fn interfaces__action__ActuatorMove_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Goal>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub amplitudes: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub periods: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub offsets: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub phases: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub samples: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loops: i32,

}



impl Default for ActuatorMove_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_Goal__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Goal() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Result() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_Result__init(msg: *mut ActuatorMove_Result) -> bool;
    fn interfaces__action__ActuatorMove_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Result>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Result>);
    fn interfaces__action__ActuatorMove_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Result>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ActuatorMove_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_Result__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_Result where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Result() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_Feedback__init(msg: *mut ActuatorMove_Feedback) -> bool;
    fn interfaces__action__ActuatorMove_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Feedback>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Feedback>);
    fn interfaces__action__ActuatorMove_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_Feedback>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_positions: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for ActuatorMove_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_Feedback__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_Feedback() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_FeedbackMessage__init(msg: *mut ActuatorMove_FeedbackMessage) -> bool;
    fn interfaces__action__ActuatorMove_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_FeedbackMessage>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_FeedbackMessage>);
    fn interfaces__action__ActuatorMove_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_FeedbackMessage>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ActuatorMove_Feedback,

}



impl Default for ActuatorMove_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_FeedbackMessage() }
  }
}




#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_SendGoal_Request__init(msg: *mut ActuatorMove_SendGoal_Request) -> bool;
    fn interfaces__action__ActuatorMove_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Request>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Request>);
    fn interfaces__action__ActuatorMove_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Request>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ActuatorMove_Goal,

}



impl Default for ActuatorMove_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_SendGoal_Request() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_SendGoal_Response__init(msg: *mut ActuatorMove_SendGoal_Response) -> bool;
    fn interfaces__action__ActuatorMove_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Response>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Response>);
    fn interfaces__action__ActuatorMove_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_SendGoal_Response>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ActuatorMove_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_SendGoal_Response() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_GetResult_Request__init(msg: *mut ActuatorMove_GetResult_Request) -> bool;
    fn interfaces__action__ActuatorMove_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Request>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Request>);
    fn interfaces__action__ActuatorMove_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Request>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ActuatorMove_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_GetResult_Request() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__ActuatorMove_GetResult_Response__init(msg: *mut ActuatorMove_GetResult_Response) -> bool;
    fn interfaces__action__ActuatorMove_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Response>, size: usize) -> bool;
    fn interfaces__action__ActuatorMove_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Response>);
    fn interfaces__action__ActuatorMove_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ActuatorMove_GetResult_Response>) -> bool;
}

// Corresponds to interfaces__action__ActuatorMove_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActuatorMove_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ActuatorMove_Result,

}



impl Default for ActuatorMove_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__ActuatorMove_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__ActuatorMove_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActuatorMove_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__ActuatorMove_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActuatorMove_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActuatorMove_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/ActuatorMove_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__ActuatorMove_GetResult_Response() }
  }
}






#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__ActuatorMove_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ActuatorMove_SendGoal;

impl rosidl_runtime_rs::Service for ActuatorMove_SendGoal {
    type Request = ActuatorMove_SendGoal_Request;
    type Response = ActuatorMove_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_SendGoal() }
    }
}




#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__ActuatorMove_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ActuatorMove_GetResult;

impl rosidl_runtime_rs::Service for ActuatorMove_GetResult {
    type Request = ActuatorMove_GetResult_Request;
    type Response = ActuatorMove_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__ActuatorMove_GetResult() }
    }
}


