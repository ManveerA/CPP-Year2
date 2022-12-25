#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "Employee.h"

class HourlyWorker : public Employee {
public:
	HourlyWorker(const std::string&, const std::string&,
		const std::string&, double = 0.0, double = 0.0);
	virtual ~HourlyWorker() {};

	virtual double earnings() const override;
	virtual void print() const override;

private:
	double wage;
	double hours;
};

#endif // !HOURLYWORKER_H