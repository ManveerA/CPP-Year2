#ifndef BUILDING_H
#define BUILDING_H
#include "CarbonFootprint.h"

class Building :public CarbonFootprint {
public:
	Building(double, double);
	virtual ~Building() {};

	virtual double getCarbonFootprint() override;

private:
	double height;
	double capacity;
};

#endif // !BUILDING_H