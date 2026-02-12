#include "BatterySystem.hpp"

BatterySystem::BatterySystem()
	: levelKWH(RobotSpecs::BATTERY_CAP_KWH) {
}

void BatterySystem::consume(double amount) {
	levelKWH -= amount;
	if (levelKWH < 0)
		levelKWH = 0;
}

double BatterySystem::getLevel() const noexcept {
	return levelKWH;
}