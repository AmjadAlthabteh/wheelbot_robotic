#include "MotionSystem.hpp"

MotionSystem::MotionSystem()
	: wheels{ Wheel(), Wheel(), Wheel(), Wheel() } {
}

void MotionSystem::drive(double speed) {
	for (auto& wheel : wheels)
		wheel.setSpeed(speed);
}

void MotionSystem::stop() {
	for (auto& wheel : wheels)
		wheel.stop();
}
