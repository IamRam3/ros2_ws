# ros2_ws
A humble distro's practice.

## Installation :- 

### Clone the repository

    git clone https://github.com/IamRam3/ros2_ws.git
    cd ros2_ws

Initialize and update submodules

    git submodule update --init --recursive

### Build

Build the project using colcon:

    colcon build --symlink-install

Important:
After building, source the setup file in every new terminal before running any ROS2 commands:

    source install/setup.bash

You can add this line to your ~/.bashrc or relevant shell startup script to avoid sourcing manually each time.
Usage

## Task -

### 1. Simulating the 2-wheel Differential Drive Robot with LIDAR and IMU

 Launch simulation:

    ros2 launch articulate_one launch_sim.launch.py

Optional: Teleoperate the robot in the simulation

    ros2 run teleop_twist_keyboard teleop_twist_keyboard

Visualize sensor data in RViz

In a new terminal (with the workspace sourced), run:

    rviz2 -d ./src/articulate_one/config/robot.rviz

(Assuming you are in the ROS2 workspace directory and the simulation is running)

### 2. Running Custom ROS2 Packages and Nodes

#### Running publisher and subscriber nodes

In the first terminal:

    ros2 run training talker

In a second terminal:

    ros2 run training listener

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
