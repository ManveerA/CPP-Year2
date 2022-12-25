#include <string>
#ifndef PACKAGE_H
#define PACKAGE_H

class Package {
public:
	Package(const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, double = 0.0, double = 0.0);

	double calculateCost();
	double getWeight();
	double getCostByWeight();
	void printPackageInfo();

private:
	std::string name_R;
	std::string address_R;
	std::string city_R;
	std::string state_R;
	std::string zipCode_R;
	std::string name_S;
	std::string address_S;
	std::string city_S;
	std::string state_S;
	std::string zipCode_S;
	double weightInOunces;
	double costPerOunce;
};
#endif // !PACKAGE_H