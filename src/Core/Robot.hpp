#pragma once

#include "BatterySystem.hpp"
#include "MotionSystem.hpp"
#include "VisionSystem.hpp"

class Robot {
private:
	BatterySystem battery;
	MotionSystem motion;
	VisionSystem vision;

public:
	Robot();

	void step();
	void status() const;
};
