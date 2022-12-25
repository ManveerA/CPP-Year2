#include "ChequingAccount.h"

ChequingAccount::ChequingAccount(double bal, double fee) : Account(bal) {
	transactionFee = fee;
}

void ChequingAccount::credit(double deposit) {
	Account::credit(deposit);
	Account::credit(-1 * transactionFee);
	std::cout << "$" << transactionFee << " transaction fee charged." << std::endl;
}

bool ChequingAccount::debit(double withdraw) {
	if (Account::debit(withdraw)) {
		Account::credit(-1 * transactionFee);
		std::cout << "$" << transactionFee << " transaction fee charged" << std::endl;
	}
	return true;
}