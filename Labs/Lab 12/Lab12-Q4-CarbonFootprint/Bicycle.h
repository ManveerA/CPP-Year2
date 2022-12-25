#ifndef BICYCLE_H
#define BICYCLE_H
#include "CarbonFootprint.h"

class Bicycle :public CarbonFootprint {
public:
	Bicycle(double);
	virtual ~Bicycle() {};

	virtual double getCarbonFootprint() override;

private:
	double kilometres;
};

#endif // !BICYCLE_H