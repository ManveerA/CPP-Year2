#pragma once
#include <string>

class Employee {
public:
	Employee(std::string _firstName, std::string _lastName, int _monthlySalary) {
		firstName = _firstName;
		lastName = _lastName;
		monthlySalary = _monthlySalary;
		if (monthlySalary < 0) {
			monthlySalary = 0;
		}
	}
	void setFirstName(std::string newFirstName) {
		firstName = newFirstName;
	}
	void setLastName(std::string newLastName) {
		lastName = newLastName;
	}
	void setMonthlySalary(int newMonthlySalary) {
		monthlySalary = newMonthlySalary;
		if (monthlySalary < 0) {
			monthlySalary = 0;
		}
	}
	std::string getFirstName() {
		return firstName;
	}
	std::string getLastName() {
		return lastName;
	}
	int getMonthlySalary() {
		return monthlySalary;
	}
private:
	std::string firstName;
	std::string lastName;
	int monthlySalary;
};