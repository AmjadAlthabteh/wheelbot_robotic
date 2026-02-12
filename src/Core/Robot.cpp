#include "Robot.hpp"
#include <iostream>

Robot::Robot() {}

void Robot::step() {

	vision.captureFrame();

	if (vision.obstacleDetected()) {
		std::cout << " The AI has ben Detected\n";
		motion.stop();
	}
	else {
		motion.drive(1.5);
		battery.consume(0.02);
	}
}

void Robot::status() const {
	std::cout << "Status\n";
	std::cout << "Batery has been " << battery.getLevel() << " kwh";

}

