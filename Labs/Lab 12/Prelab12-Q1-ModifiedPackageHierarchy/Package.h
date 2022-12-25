#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
public:
	Package(const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, double = 0.0, double = 0.0);
	virtual ~Package() {}; // virtual destructor

	double getWeight();
	double getCostByWeight();

	std::string getNameR();
	std::string getAddressR();
	std::string getCityR();
	std::string getStateR();
	std::string getZipCodeR();
	std::string getNameS();
	std::string getAddressS();
	std::string getCityS();
	std::string getStateS();
	std::string getZipCodeS();

	virtual double calculateCost(); // virtual

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