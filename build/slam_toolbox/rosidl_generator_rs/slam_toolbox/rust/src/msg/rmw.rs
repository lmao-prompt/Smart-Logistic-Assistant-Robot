#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__LocalizedLaserScan() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__LocalizedLaserScan__init(msg: *mut LocalizedLaserScan) -> bool;
    fn slam_toolbox__msg__LocalizedLaserScan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LocalizedLaserScan>, size: usize) -> bool;
    fn slam_toolbox__msg__LocalizedLaserScan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LocalizedLaserScan>);
    fn slam_toolbox__msg__LocalizedLaserScan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LocalizedLaserScan>, out_seq: *mut rosidl_runtime_rs::Sequence<LocalizedLaserScan>) -> bool;
}

// Corresponds to slam_toolbox__msg__LocalizedLaserScan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Single scan from a planar laser range-finder and the pose of the robot

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalizedLaserScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub scan: sensor_msgs::msg::rmw::LaserScan,

    /// Scanner pose in robot base_frame
    pub scanner_offset: geometry_msgs::msg::rmw::TransformStamped,

    /// Robot base_frame pose in a global (map) frame
    pub pose: geometry_msgs::msg::rmw::PoseWithCovarianceStamped,

}



impl Default for LocalizedLaserScan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__LocalizedLaserScan__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__LocalizedLaserScan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LocalizedLaserScan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LocalizedLaserScan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LocalizedLaserScan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LocalizedLaserScan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LocalizedLaserScan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LocalizedLaserScan where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/LocalizedLaserScan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__LocalizedLaserScan() }
  }
}


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__NewNodeEvent() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__NewNodeEvent__init(msg: *mut NewNodeEvent) -> bool;
    fn slam_toolbox__msg__NewNodeEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NewNodeEvent>, size: usize) -> bool;
    fn slam_toolbox__msg__NewNodeEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NewNodeEvent>);
    fn slam_toolbox__msg__NewNodeEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NewNodeEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<NewNodeEvent>) -> bool;
}

// Corresponds to slam_toolbox__msg__NewNodeEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NewNodeEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub new_node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edge: super::super::msg::rmw::GraphEdge,

}



impl Default for NewNodeEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__NewNodeEvent__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__NewNodeEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NewNodeEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__NewNodeEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__NewNodeEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__NewNodeEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NewNodeEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NewNodeEvent where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/NewNodeEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__NewNodeEvent() }
  }
}


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__LoopClosureEvent() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__LoopClosureEvent__init(msg: *mut LoopClosureEvent) -> bool;
    fn slam_toolbox__msg__LoopClosureEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoopClosureEvent>, size: usize) -> bool;
    fn slam_toolbox__msg__LoopClosureEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoopClosureEvent>);
    fn slam_toolbox__msg__LoopClosureEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoopClosureEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<LoopClosureEvent>) -> bool;
}

// Corresponds to slam_toolbox__msg__LoopClosureEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoopClosureEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for LoopClosureEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__LoopClosureEvent__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__LoopClosureEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoopClosureEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LoopClosureEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LoopClosureEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__LoopClosureEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoopClosureEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoopClosureEvent where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/LoopClosureEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__LoopClosureEvent() }
  }
}


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__GraphNode() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__GraphNode__init(msg: *mut GraphNode) -> bool;
    fn slam_toolbox__msg__GraphNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphNode>, size: usize) -> bool;
    fn slam_toolbox__msg__GraphNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphNode>);
    fn slam_toolbox__msg__GraphNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphNode>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphNode>) -> bool;
}

// Corresponds to slam_toolbox__msg__GraphNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for GraphNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__GraphNode__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__GraphNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphNode where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/GraphNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__GraphNode() }
  }
}


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__GraphEdge() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__GraphEdge__init(msg: *mut GraphEdge) -> bool;
    fn slam_toolbox__msg__GraphEdge__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>, size: usize) -> bool;
    fn slam_toolbox__msg__GraphEdge__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>);
    fn slam_toolbox__msg__GraphEdge__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphEdge>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>) -> bool;
}

// Corresponds to slam_toolbox__msg__GraphEdge
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphEdge {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub relative_pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub covariance: [f64; 9],

}



impl Default for GraphEdge {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__GraphEdge__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__GraphEdge__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphEdge {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphEdge__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphEdge__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__GraphEdge__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphEdge {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphEdge where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/GraphEdge";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__GraphEdge() }
  }
}


#[link(name = "slam_toolbox__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__PoseGraph() -> *const std::ffi::c_void;
}

#[link(name = "slam_toolbox__rosidl_generator_c")]
extern "C" {
    fn slam_toolbox__msg__PoseGraph__init(msg: *mut PoseGraph) -> bool;
    fn slam_toolbox__msg__PoseGraph__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseGraph>, size: usize) -> bool;
    fn slam_toolbox__msg__PoseGraph__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseGraph>);
    fn slam_toolbox__msg__PoseGraph__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseGraph>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseGraph>) -> bool;
}

// Corresponds to slam_toolbox__msg__PoseGraph
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphEdge>,

}



impl Default for PoseGraph {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !slam_toolbox__msg__PoseGraph__init(&mut msg as *mut _) {
        panic!("Call to slam_toolbox__msg__PoseGraph__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseGraph {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__PoseGraph__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__PoseGraph__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { slam_toolbox__msg__PoseGraph__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseGraph {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseGraph where Self: Sized {
  const TYPE_NAME: &'static str = "slam_toolbox/msg/PoseGraph";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__slam_toolbox__msg__PoseGraph() }
  }
}


