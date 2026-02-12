#pragma once
#include <iostream>
#include "RobotSpecs.hpp"

class Wheel {
private:
	double speed{};
	double torqueList{};

public:
	explicit Wheel(double torque = RobotSpecs::MAX_TORQUE);
	
	void setSpeed(double newSpeed);
	void stop();

	[[nodiscard]] double getSpeed() const noexcept;
};
