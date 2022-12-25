#include "Account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount : public Account {
public:
	SavingsAccount(double = 0.0, double = 0.0);
	virtual ~SavingsAccount() {};

	double calculateInterest();
private:
	double interestRate;
};
#endif // !SAVINGSACCOUNT_H