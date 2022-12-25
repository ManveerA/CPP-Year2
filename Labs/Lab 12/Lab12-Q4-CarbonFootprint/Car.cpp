#include "Car.h"
#include <iostream>

Car::Car(double m, double g) {
	milage = m;
	gas = g;
}

double Car::getCarbonFootprint() {
	std::cout << "Car that has used " << gas << " gallons of gas and has a milage of " << milage
		<< ": " << milage * gas;
	return milage * gas;
}