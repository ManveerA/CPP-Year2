#include "Account.h"

Account::Account(double bal) {
	if (bal >= 0) {
		balance = bal;
	}
	else {
		std::cout << "Balance cannot be less than 0.0. Setting to 0.0." << std::endl;
		balance = 0;
	}
}

void Account::credit(double deposit) {
	balance += deposit;
}

bool Account::debit(double withdraw) {
	if (balance >= withdraw) {
		balance -= withdraw;
		return true;
	}
	else {
		std::cout << "Debit amount exceeded account balance." << std::endl;
		return false;
	}
}

double Account::getBalance() {
	return balance;
}