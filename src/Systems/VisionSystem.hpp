#pragma once
#include <iostream>
#include <cstdlib>

class VisionSystem {
public:
	void captureFrame() const {
		std::cout << " Vision depth fream has been vcaptures \n";
	}

	[[nodiscard]] bool obstacleDetected() const {
		return (std::rand() % 5 == 0);
	}
};