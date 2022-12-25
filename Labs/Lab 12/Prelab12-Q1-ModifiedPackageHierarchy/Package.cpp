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

std::string Package::getNameR() {
	return name_R;
}

std::string Package::getNameS() {
	return name_S;
}

std::string Package::getAddressR() {
	return address_R;
}

std::string Package::getAddressS() {
	return address_S;
}

std::string Package::getCityR() {
	return city_R;
}

std::string Package::getCityS() {
	return city_S;
}

std::string Package::getStateR() {
	return state_R;
}

std::string Package::getStateS() {
	return state_S;
}

std::string Package::getZipCodeR() {
	return zipCode_R;
}

std::string Package::getZipCodeS() {
	return zipCode_S;
}