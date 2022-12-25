#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double bal, double iRate) : Account(bal) {
	interestRate = iRate;
}

double SavingsAccount::calculateInterest() {
	return interestRate * Account::getBalance();
}