#ifndef CAR_H
#define CAR_H
#include "CarbonFootprint.h"

class Car :public CarbonFootprint {
public:
	Car(double, double);
	virtual ~Car() {};

	virtual double getCarbonFootprint() override;

private:
	double milage;
	double gas;
};

#endif // !CAR_H