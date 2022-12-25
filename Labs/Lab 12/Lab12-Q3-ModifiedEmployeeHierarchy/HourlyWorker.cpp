#include "HourlyWorker.h"
#include <iostream>

HourlyWorker::HourlyWorker(const std::string& first,
	const std::string& last, const std::string& ssn, double _wage, double _hours)
	:Employee(first, last, ssn)
{
	wage = _wage;
	hours = _hours;
}

double HourlyWorker::earnings() const {
	if (hours <= 40) {
		return wage * hours;
	}
	else {
		return wage * 40 + (hours - 40) * wage * 1.5;
	}
}

void HourlyWorker::print() const
{
	std::cout << "HourlyWorker employee: ";
	Employee::print(); // code reuse
	std::cout << "\nwage per hour: " << wage
		<< "; number of hours: " << hours;

} // end function print