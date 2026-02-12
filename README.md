# WheelBot Robotics Platform

Robotics control and simulation framework written in modern C++ for autonomous mobile robots. This project simulates a four-wheeled robot platform with integrated battery management, motion control, and depth vision capabilities.

## Purpose

This project was developed to:
- **Simulate real-world robotics systems** with realistic constraints (battery drain, torque limits, weight)
- **Provide a modular architecture** for robotics software that can be extended and modified
- **Test control algorithms** before deploying to physical hardware
- **Educational tool** for understanding robotics system integration and C++ design patterns

The simulation models a mid-sized autonomous ground vehicle suitable for indoor navigation, warehouse automation, or service robotics applications.

## Technical Specifications

### Physical Characteristics
- **Weight**: 75 kg
- **Max Speed**: 2.0 m/s
- **Max Torque**: 260 N·m per wheel
- **Drive System**: 4-wheel independent drive (4WD)

### Power System
- **Battery Capacity**: 0.864 kWh (16 Amp-hours)
- **Dynamic power consumption** based on motion and sensor activity
- Real-time battery monitoring and status reporting

### Sensor Suite
- **Depth Camera**: Intel RealSense D435i-style depth sensor
- **Resolution**: 640x480 pixels
- **Frame Rate**: 30 FPS
- **Range**: 0.3m - 10m

## Architecture

The codebase follows a clean, modular architecture with clear separation of concerns:

```
Robos/
├── main.cpp                    # Entry point and simulation loop
├── ideas_process.txt           # Development notes and planning
└── src/
    ├── Core/
    │   ├── Robot.hpp           # Main robot controller
    │   └── Robot.cpp
    ├── Hardware/
    │   ├── Wheel.hpp           # Individual wheel control
    │   └── Wheel.cpp
    └── Systems/
        ├── BatterySystem.hpp   # Power management
        ├── BatterySystem.cpp
        ├── MotionSystem.hpp    # 4-wheel drive control
        ├── MotionSystem.cpp
        ├── VisionSystem.hpp    # Depth camera simulation
        └── RobotSpecs.hpp      # System constants
```

### System Components

**Core Layer**: Integrates all subsystems and manages the robot's main control loop

**Hardware Layer**: Low-level control of physical components (wheels, motors)

**Systems Layer**: High-level subsystems (battery management, motion planning, vision processing)

## Building the Project

### Prerequisites
- C++20 compatible compiler (GCC 10+, Clang 11+, MSVC 2019+)
- Standard C++ library

### Compilation

**Using GCC/Clang:**
```bash
cd Robos
g++ -std=c++20 -Wall main.cpp src/Core/*.cpp src/Hardware/*.cpp src/Systems/*.cpp -o robot
```

**Using Visual Studio:**
Open `Robos.sln` in Visual Studio and build the solution (Ctrl+Shift+B)

### Running

**Windows:**
```cmd
.\robot.exe
```

**Linux/macOS/WSL:**
```bash
./robot
```

## Sample Output

```
Robotics Platform Booting...
Weight: 75 kg
Max Speed: 2.0 m/s
Max Torque: 260 N·m

[Step 1] Battery: 98.5% | Speed: 1.2 m/s | Vision: Active
[Step 2] Battery: 97.8% | Speed: 1.5 m/s | Vision: Active
...
```

## Roadmap

Future enhancements planned:
- [ ] Path planning algorithms (A*, RRT)
- [ ] Obstacle detection and avoidance
- [ ] SLAM (Simultaneous Localization and Mapping)
- [ ] ROS2 integration
- [ ] Hardware-in-the-loop simulation
- [ ] Multi-robot coordination

## Use Cases

- **Research**: Test motion control and navigation algorithms
- **Education**: Learn robotics system design and C++ architecture
- **Prototyping**: Validate designs before hardware implementation
- **Testing**: Simulate edge cases and failure modes safely

## License

MIT License - Feel free to use this code for educational or commercial purposes.

## Author

Amjad Al-thabteh

---

*Built with modern C++ for robotics simulation and control*
