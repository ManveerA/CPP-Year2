#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle(double k) {
	kilometres = k;
}

double Bicycle::getCarbonFootprint() {
	std::cout << "Bicycle: " << 0.21 * kilometres;
	return 0.21 * kilometres;
}