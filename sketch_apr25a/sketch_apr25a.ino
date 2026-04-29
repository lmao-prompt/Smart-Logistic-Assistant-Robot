#include <ESP32Encoder.h>
#include <smorphi_single.h>    
#include <micro_ros_arduino.h>
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32_multi_array.h>
#include <nav_msgs/msg/odometry.h>
#include <rmw_microros/rmw_microros.h>
#include <geometry_msgs/msg/twist.h>

#define M1A 4
#define M1B 5
#define M2A 19
#define M2B 18
#define M3A 23
#define M3B 25
#define M4A 26
#define M4B 27

Smorphi_single my_robot;
ESP32Encoder enc1, enc2, enc3, enc4;

std_msgs__msg__Int32MultiArray msg;
rcl_publisher_t publisher;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
nav_msgs__msg__Odometry odom_msg;
rcl_publisher_t odom_publisher;
rcl_subscription_t cmd_vel_sub;
geometry_msgs__msg__Twist cmd_vel_msg;
rclc_executor_t executor;

float wheel_radius = 0.03, LX = 0.05, LY = 0.05, x_pos = 0.0, y_pos = 0.0, theta = 0.0, target_vx = 0.0, target_vy = 0.0, target_vth = 0.0;
int ticks_per_rev = 200;
long prev_enc1 = 0, prev_enc2 = 0, prev_enc3 = 0, prev_enc4 = 0;
unsigned long last_time = 0, prev_time = 0;

void cmd_vel_callback(const void *msgin) {
  const geometry_msgs__msg__Twist *msg = 
    (const geometry_msgs__msg__Twist *)msgin;
  
  target_vx  = msg->linear.x;
  target_vy  = msg->linear.y;
  target_vth = msg->angular.z;
}

void setup() {
  set_microros_transports();
  my_robot.BeginSmorphi_single();

  allocator = rcl_get_default_allocator();
  rclc_support_init(&support, 0, NULL, &allocator);
  rclc_node_init_default(&node, "smorphi_encoder_node", "", &support);
  rclc_publisher_init_default(
    &odom_publisher, &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry),
    "odom"
  );
  rmw_uros_sync_session(1000);

  rclc_executor_init(&executor, &support.context, 1, &allocator);
  rclc_subscription_init_default(
    &cmd_vel_sub, &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
    "/cmd_vel"
  );

  rclc_executor_add_subscription(
    &executor, &cmd_vel_sub, &cmd_vel_msg,
    &cmd_vel_callback, ON_NEW_DATA
  );

  odom_msg.header.frame_id.data = (char*)"odom";
  odom_msg.header.frame_id.size = strlen(odom_msg.header.frame_id.data);
  odom_msg.header.frame_id.capacity = odom_msg.header.frame_id.size + 1;
  
  odom_msg.child_frame_id.data = (char*)"base_link";
  odom_msg.child_frame_id.size = strlen(odom_msg.child_frame_id.data);
  odom_msg.child_frame_id.capacity = odom_msg.child_frame_id.size + 1;

  enc1.attachHalfQuad(M1A, M1B);
  enc2.attachHalfQuad(M2A, M2B);
  enc3.attachHalfQuad(M3A, M3B);
  enc4.attachHalfQuad(M4A, M4B);

  enc1.setCount(0);
  enc2.setCount(0);
  enc3.setCount(0);
  enc4.setCount(0);
}

void loop() {
  unsigned long now = millis();
  float dt = (now - prev_time) / 1000.0;
  if (dt <= 0) return;

  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
  // my_robot.MoveForward(50);
  if (target_vx > 0.1) {
    my_robot.MoveForward((int)(target_vx * 100));
  } else if (target_vx < -0.1) {
    my_robot.MoveBackward((int)(fabs(target_vx) * 100));
  } else if (target_vy > 0.1) {
    my_robot.MoveRight((int)(target_vy * 100));
  } else if (target_vy < -0.1) {
    my_robot.MoveLeft((int)(fabs(target_vy) * 100));
  } else if (target_vth > 0.1) {
    my_robot.CenterPivotLeft((int)(target_vth * 100));
  } else if (target_vth < -0.1) {
    my_robot.CenterPivotRight((int)(fabs(target_vth) * 100));
  } else {
    my_robot.stopSmorphi_single();
  }

  long cur_enc1 = enc1.getCount();
  long cur_enc2 = enc2.getCount();
  long cur_enc3 = enc3.getCount();
  long cur_enc4 = enc4.getCount();

  float d1 = (float)(cur_enc1 - prev_enc1) / ticks_per_rev * 2 * PI * wheel_radius;
  float d2 = (float)(cur_enc2 - prev_enc2) / ticks_per_rev * 2 * PI * wheel_radius;
  float d3 = (float)(cur_enc3 - prev_enc3) / ticks_per_rev * 2 * PI * wheel_radius;
  float d4 = (float)(cur_enc4 - prev_enc4) / ticks_per_rev * 2 * PI * wheel_radius;

  float vx = (d1 + d2 + d3 + d4) / 4.0 / dt;
  float vy = (-d1 + d2 + d3 - d4) / 4.0 / dt;
  float vth = (-d1 + d2 - d3 + d4) / (4.0 * (LX + LY)) / dt;

  float delta_x = (vx * cos(theta) - vy * sin(theta)) * dt;
  float delta_y = (vx * sin(theta) + vy * cos(theta)) * dt;
  float delta_th = vth * dt;

  x_pos += delta_x;
  y_pos += delta_y;
  theta += delta_th;

  int64_t time = rmw_uros_epoch_millis();
  odom_msg.header.stamp.sec = time / 1000;
  odom_msg.header.stamp.nanosec = (time % 1000) * 1000000;
  odom_msg.header.frame_id.data = "odom";
  odom_msg.child_frame_id.data = "base_link";

  odom_msg.twist.twist.linear.x = vx;
  odom_msg.twist.twist.linear.y = vy;
  odom_msg.twist.twist.angular.z = vth;

  odom_msg.pose.pose.position.x = x_pos; 
  odom_msg.pose.pose.position.y = y_pos;
  odom_msg.pose.pose.orientation.z = sin(theta / 2.0); // Sederhananya untuk 2D
  odom_msg.pose.pose.orientation.w = cos(theta / 2.0);

  prev_enc1 = cur_enc1; prev_enc2 = cur_enc2; 
  prev_enc3 = cur_enc3; prev_enc4 = cur_enc4;
  prev_time = now;

  rcl_publish(&odom_publisher, &odom_msg, NULL);
  delay(10);
}