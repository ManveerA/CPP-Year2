#include <iostream> 
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int initialBalance) {
	savingsBalance = initialBalance;
}

void SavingsAccount::modifyInterestRate(double r) {
	annualInterestRate = r;
}

double SavingsAccount::calculateMonthlyInterest() {
	return savingsBalance += savingsBalance * annualInterestRate / 12;
}

double SavingsAccount::annualInterestRate = 0.01;