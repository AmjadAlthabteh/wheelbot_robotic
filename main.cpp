#include <iostream>
#include <ctime>
#include "Robot.hpp"

int main() {

    std::srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Robotics Platform Booting...\n";
    std::cout << "Weight: 70 kg\n";
    std::cout << "Max Speed: 2 m/s\n";
    std::cout << "Max Torque: 360 N·m\n\n";

    Robot robot;

    for (int i = 0; i < 10; ++i) {
        robot.step();
        robot.status();
    }

    return 0;
}
