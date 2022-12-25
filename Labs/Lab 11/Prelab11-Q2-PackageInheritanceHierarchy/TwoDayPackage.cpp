#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& _name_R, const std::string& _address_R,
	const std::string& _city_R, const std::string& _state_R, const std::string& _zipCode_R,
	const std::string& _name_S, const std::string& _address_S, const std::string& _city_S,
	const std::string& _state_S, const std::string& _zipCode_S,
	double weight, double costPer, double fee)
	: Package(_name_R, _address_R, _city_R, _state_R, _zipCode_R, _name_S, _address_S,
		_city_S, _state_S, _zipCode_S, weight, costPer) {
	flatFee = fee;
}

double TwoDayPackage::calculateCost() {
	double cost = Package::getWeight() * Package::getCostByWeight() + flatFee;
	return cost;
}