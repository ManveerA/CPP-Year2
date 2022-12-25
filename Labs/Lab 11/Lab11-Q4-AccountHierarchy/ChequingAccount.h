#include "Account.h"
#ifndef CHEQUINGACCOUNT_H
#define CHEQUINGACCOUNT_H

class ChequingAccount : public Account {
public:
	ChequingAccount(double = 0.0, double = 1);
	void credit(double);
	void debit(double);
private:
	double balance;
	double transactionFee;
};
#endif // !CHEQUINGACCOUNT_H