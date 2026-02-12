#pragma once

#include "wheel.hpp"
#include <array>

class MotionSystem {
private:
	std::array<Wheel, RobotSpecs::WHEEL_COUNT> wheels;

public:
	MotionSystem();

	void drive(double speed);
	void stop();
};
