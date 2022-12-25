#include <iostream>
#include "Package.h"

Package::Package(const std::string& _name_R, const std::string& _address_R,
	const std::string& _city_R, const std::string& _state_R, const std::string& _zipCode_R,
	const std::string& _name_S, const std::string& _address_S, const std::string& _city_S,
	const std::string& _state_S, const std::string& _zipCode_S,
	double weight, double costPer) {

	name_R = _name_R;
	address_R = _address_R;
	city_R = _city_R;
	state_R = _state_R;
	zipCode_R = _zipCode_R;
	name_S = _name_S;
	address_S = _address_S;
	city_S = _city_S;
	state_S = _state_S;
	zipCode_S = _zipCode_S;
	weightInOunces = weight;
	costPerOunce = costPer;
}

double Package::calculateCost() {
	double cost = weightInOunces * costPerOunce;
	return cost;
}

double Package::getWeight() {
	return weightInOunces;
}

double Package::getCostByWeight() {
	return costPerOunce;
}

void Package::printPackageInfo() {
	std::cout << "Sender Information:\n" << name_S << "\n" << address_S
		<< "\n" << city_S << ", " << state_S << " " << zipCode_S << std::endl;
	std::cout << "\nRecipient Information:\n" << name_R << "\n" << address_R
		<< "\n" << city_R << ", " << state_R << " " << zipCode_R << std::endl;
}