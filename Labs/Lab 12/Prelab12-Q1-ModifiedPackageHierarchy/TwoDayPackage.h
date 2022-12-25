#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package {
public:
	TwoDayPackage(const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	virtual ~TwoDayPackage() {};

	virtual double calculateCost() override;

private:
	double flatFee;
};
#endif // !TWODAYPACKAGE_H