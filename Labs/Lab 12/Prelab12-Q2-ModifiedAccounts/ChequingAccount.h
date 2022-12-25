#include "Account.h"
#ifndef CHEQUINGACCOUNT_H
#define CHEQUINGACCOUNT_H

class ChequingAccount : public Account {
public:
	ChequingAccount(double = 0.0, double = 1);
	virtual ~ChequingAccount() {};

	virtual void credit(double) override;
	virtual bool debit(double) override;
private:
	double transactionFee;
};
#endif // !CHEQUINGACCOUNT_H