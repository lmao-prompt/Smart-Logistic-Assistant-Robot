# 🤖 Smart Logistic Assistant Robot

<div align="center">
  
**Smart Logistic Assistant Robot.**

</div>

---

## ✨ Fitur

| Fitur | Keterangan |
|---|---|
| 🗺️ **SLAM Real-time** | Pemetaan dan lokalisasi simultan menggunakan `slam_toolbox` |
| 📡 **Sensor LiDAR** | Dukungan RPLIDAR A2M12 untuk pemindaian lingkungan 360° |
| 🔌 **Micro-ROS Bridge** | Komunikasi serial/UDP antara mikrokontroler dan ROS 2 |
| 🧭 **Navigasi Otonom** | TF tree lengkap dengan odometri dan transformasi koordinat |
| 🕹️ **Teleoperation** | Kontrol manual via keyboard untuk debugging dan pengujian |

---

## 📦 Instalasi

### 1. Install ROS 2

> Ikuti panduan resmi di [docs.ros.org](https://docs.ros.org/en/jazzy/Installation.html)

### 2. Install Dependensi Paket

```bash
sudo apt update && sudo apt install -y \
  ros-$ROS_DISTRO-rplidar-ros \
  ros-$ROS_DISTRO-slam-toolbox \
  ros-$ROS_DISTRO-teleop-twist-keyboard \
  ros-$ROS_DISTRO-tf2-ros \
  ros-$ROS_DISTRO-tf2-tools
```

### 3. Install Micro-ROS Agent

```bash
# Cara 1: Via snap (direkomendasikan)
sudo snap install micro-ros-agent

# Cara 2: Build dari source
cd ~/ros2_ws/src
git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git
cd ~/ros2_ws && colcon build --packages-select micro_ros_setup
source install/setup.bash
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
source install/setup.bash
```

### 4. Clone dan Build Workspace

```bash
cd ~/ros2_ws/src
git clone https://github.com/<username>/smart-logistic-robot.git
cd ~/ros2_ws
colcon build
source install/setup.bash
```

---

## 🚀 Panduan Menjalankan (Step-by-Step)

> ⚠️ **Buka terminal baru untuk setiap langkah di bawah ini.**
> Jalankan `source /opt/ros/$ROS_DISTRO/setup.bash` di setiap terminal sebelum memulai.

### Terminal 1 — Launch Sensor LiDAR

Menjalankan driver RPLIDAR untuk mulai memindai lingkungan.

```bash
ros2 launch rplidar_ros view_rplidar_a2m12_launch.py
```

---

### Terminal 2 — Launch Micro-ROS Agent

Menjalankan jembatan komunikasi antara mikrokontroler dan ROS 2.

#### Via Serial (USB)

```bash
# Baud rate default 115200
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyUSB1
```

#### Via UDP (Wi-Fi / Ethernet)

```bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

#### Via TCP

```bash
ros2 run micro_ros_agent micro_ros_agent tcp4 --port 8888
```
---

### Terminal 3 — Jalankan Node Odometri ke TF

Mempublish transformasi odometri ke TF tree.

```bash
python3 ~/ros2_ws/odom_to_tf.py
```

---

### Terminal 4 — Static Transform Publisher

Mendefinisikan posisi sensor LiDAR relatif terhadap `base_link`.

```bash
ros2 run tf2_ros static_transform_publisher 0.0 0.0 0.1 0.0 0.0 0.0 base_link laser
```

---

### Terminal 5 — Launch SLAM Toolbox

Memulai proses pemetaan dan lokalisasi secara real-time.

```bash
ros2 launch slam_toolbox online_async_launch.py
```

---

### Terminal 6 — Teleoperasi

Kontrol robot secara manual via keyboard.

```bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

**Kontrol keyboard:**

```
   u    i    o
   j    k    l
   m    ,    .

i / , : maju / mundur
j / l : putar kiri / kanan
k     : berhenti
u/o   : diagonal
q / z : tambah / kurangi kecepatan
```
---

## 📄 Lisensi

Distributed under the MIT License. See `LICENSE` for more information.

---

<div align="center">
</div>
