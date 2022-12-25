#include <iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
	Account(double = 0.0);
	virtual ~Account() {};

	virtual void credit(double);
	virtual bool debit(double);
	double getBalance();

private:
	double balance;
};
#endif // !ACCOUNT_H