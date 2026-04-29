# 🤖 Smart Logistic Assistant Robot

Proyek pengembangan robot logistik pintar berbasis **ROS 2** yang mengintegrasikan pemetaan real-time (SLAM), komunikasi hardware via **Micro-ROS**, dan sistem navigasi otonom.

---

## 🛠️ Persyaratan Sistem
* **OS:** Ubuntu 24.04 (Noble)
* **Middleware:** ROS 2 Jazzy / Humble
* **Hardware:** RPLIDAR A2M12, Micro-ROS compatible controller (STM32/ESP32)

---

## 🚀 Panduan Menjalankan (Step-by-Step)

Buka terminal baru untuk setiap perintah di bawah ini:

### 1. Launch Sensor Lidar
Menjalankan driver sensor untuk mulai memindai lingkungan.
```bash
ros2 launch rplidar_ros view_rplidar_a2m12_launch.py
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyUSB1
python3 ~/ros2_ws/odom_to_tf.py
ros2 run tf2_ros static_transform_publisher 0.0 0.0 0.1 0.0 0.0 0.0 base_link laser
ros2 launch slam_toolbox online_async_launch.py
ros2 run teleop_twist_keyboard teleop_twist_keyboard
