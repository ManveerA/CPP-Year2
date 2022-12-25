#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	double calculateCost();

private:
	double nightCost;
};
#endif // !OVERNIGHTPACKAGE_H