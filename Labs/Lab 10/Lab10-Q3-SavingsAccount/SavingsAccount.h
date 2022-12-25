#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount {
public:
	SavingsAccount(int = 0);
	double calculateMonthlyInterest();
	void static modifyInterestRate(double r);
private:
	static double annualInterestRate;
	double savingsBalance;
};

#endif // !SAVINGSACCOUNT_H
