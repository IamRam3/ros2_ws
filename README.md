# ros2_ws
A humble distro's practice.

## Demo video
[Click to watch the demo](https://drive.google.com/file/d/1LIyxLz-5gxEQXeS0jAg2ZJjzHv6a5EfB/view?usp=sharing)

## Prerequisites :-
✅ System Requirements
 - OS: Ubuntu 22.04 LTS (strongly recommended for ROS 2 Humble)
 - CPU: 64-bit processor
 - RAM: 8 GB or more (recommended)
 - Libraries: ROS, Gazebo, and other dependencies

## Installation :- 

### Clone the repository

    git clone https://github.com/IamRam3/ros2_ws.git
    cd ros2_ws

Initialize and update submodules

    git submodule update --init --recursive

### Build

Build the project using colcon:

    colcon build

Important:
After building, source the setup file in every new terminal before running any ROS2 commands:

    source install/setup.bash

You can add this line to your ~/.bashrc or relevant shell startup script to avoid sourcing manually each time.
Usage

## Task -

### 1. Simulating the 2-wheel Differential Drive Robot with LIDAR and IMU

 Launch simulation:

    ros2 launch articulate_one launch_sim.launch.py

![Screenshot from 2025-05-20 16-35-28](https://github.com/user-attachments/assets/c5eaf2a3-4d23-425b-9786-8c450301394f)


Optional: Teleoperate the robot in the simulation

    ros2 run teleop_twist_keyboard teleop_twist_keyboard

Visualize sensor data in RViz

In a new terminal (with the workspace sourced), run:

    rviz2 -d ./src/articulate_one/config/robot.rviz

(Assuming you are in the ROS2 workspace directory and the simulation is running)

![Screenshot from 2025-05-20 16-36-53](https://github.com/user-attachments/assets/291f6b75-c774-442b-bcea-b1a49e4a0af0)


### 2. Running Custom ROS2 Packages and Nodes

#### Running publisher and subscriber nodes

In the first terminal:

    ros2 run training talker

In a second terminal:

    ros2 run training listener

![Screenshot from 2025-05-20 16-39-01](https://github.com/user-attachments/assets/d69a6cf9-20d6-487d-ac82-45d78116ca28)


#### Running custom service and client

In a new terminal:

    ros2 run training service

In another terminal:

    ros2 run training client 1 2

(Replace 1 and 2 with any numbers as arguments to the client)

## progress:
from 1st task
- [x] 2-wheel differential drive robot URDF
- [x] Attach LIDAR and IMU sensors
- [x] Publish LIDAR & IMU topics
- [x] Visualize sensor data using RViz
- [x] Custom world and spawn robot in it
- [ ] Map creation
- [ ] Nav2 integration

from 2nd task
- [x] Packages: training_interfaces, training
- [x] Publisher and subscriber nodes with custom msg 'person.msg'
- [x] Sevice & Cleint with Custom service 'value.srv' 
