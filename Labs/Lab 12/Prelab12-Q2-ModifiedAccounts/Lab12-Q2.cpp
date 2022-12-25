#include <iostream>
#include <iomanip>
#include "Account.h"
#include "SavingsAccount.h"
#include "ChequingAccount.h"
#include <vector>
using namespace std;

int main()
{
	std::cout << fixed << setprecision(2);
	SavingsAccount account1(25, 0.03);
	ChequingAccount account2(80, 1.00);
	SavingsAccount account3(200, 0.015);
	ChequingAccount account4(400, 0.50);

	std::vector<Account*>vectorOfAccounts(4);
	vectorOfAccounts[0] = &account1;
	vectorOfAccounts[1] = &account2;
	vectorOfAccounts[2] = &account3;
	vectorOfAccounts[3] = &account4;

	for (int i = 0; i < vectorOfAccounts.size(); i++) {
		double input = 0;
		bool isSavings = false;

		std::cout << "Account " << i + 1 << "\n" << std::endl;

		SavingsAccount* tempPtr = dynamic_cast<SavingsAccount*>(vectorOfAccounts[i]);

		if (tempPtr != NULL) {
			std::cout << "Account " << i + 1 << " is a Savings Account" << std::endl;
			isSavings = true;
		}
		else {
			std::cout << "Account " << i + 1 << " is a Chequing Account" << std::endl;
		}

		std::cout << "The balance is $" << vectorOfAccounts[i]->getBalance() << std::endl;

		std::cout << "\nEnter an amount to withdraw: $";
		std::cin >> input;
		vectorOfAccounts[i]->debit(input);
		
		std::cout << "Enter an amount to deposit: $";
		std::cin >> input;
		vectorOfAccounts[i]->credit(input);

		if (isSavings) {
			std::cout << "Adding $" << tempPtr->calculateInterest() << " interest." << std::endl;
			tempPtr->credit(tempPtr->calculateInterest());
		}

		std::cout << "Updated Account " << i + 1 << " balance: $" << vectorOfAccounts[i]->getBalance()
			<< "\n" << std::endl;
	}
}