#include "wheel.hpp"

Wheel::Wheel(double torque)
	: torqueList(torque) {
}

void Wheel::setSpeed(double newSpeed) {

	if (newSpeed > RobotSpecs::MAX_SPEED)
		speed = RobotSpecs::MAX_SPEED;
	else if (newSpeed < 0)
		speed = 0;
	else
		speed = newSpeed;
}

void Wheel::stop() {
	speed = 0;
}

double Wheel::getSpeed() const noexcept {
	return speed;
}