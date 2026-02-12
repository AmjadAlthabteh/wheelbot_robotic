#pragma once
#include "RobotSpecs.hpp"

class BatterySystem {
private:
	double levelKWH;

public:
	BatterySystem();

	void consume(double amoun);
	[[nodiscard]] double getLevel() const noexcept;
};


