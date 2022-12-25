#include "Building.h"
#include <iostream>

Building::Building(double h, double c) {
	height = h;
	capacity = c;
}

double Building::getCarbonFootprint() {
	std::cout << "Building at height of " << height << " metres and a capacity of " << capacity
		<< " people: " << height * capacity;
	return height * capacity;
}