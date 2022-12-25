#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	//Object initialization
	Account account1(50, "Jane Green");
	Account account2(-7, "John Blue");

	//Display intitial balance of each object
	cout << "account1: The " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: The " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	//Input for deposit into object account1
	int depositAmount = 0;
	cout << "\nEnter the deposit amount for account1: $";
	cin >> depositAmount;
	account1.credit(depositAmount);
	cout << "Adding $" << depositAmount << " to account1 balance..." << endl;

	//Display current balance of each object
	cout << "\naccount1: The " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: The " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	//Input for deposit into object account2
	cout << "\nEnter the deposit amount for account2: $";
	cin >> depositAmount;
	account2.credit(depositAmount);
	cout << "Adding $" << depositAmount << " to account2 balance..." << endl;

	//Display current balance of each object
	cout << "\naccount1: The " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: The " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	//Input for withdrawal from object account1
	int withdrawAmount = 0;
	cout << "\nEnter the withdrawal amount for account1: $";
	cin >> withdrawAmount;
	account1.debit(withdrawAmount);
	cout << "Subtracting $" << withdrawAmount << " from account1 balance..." << endl;

	//Display current balance of each object
	cout << "\naccount1: The " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: The " << account2.getName() << " balance is $" << account2.getBalance() << endl;

	//Input for withdrawal from object account2
	cout << "\nEnter the withdrawal amount for account2: $";
	cin >> withdrawAmount;
	account2.debit(withdrawAmount);
	cout << "Subtracting $" << withdrawAmount << " from account2 balance..." << endl;

	//Display end balance of each object
	cout << "\naccount1: The " << account1.getName() << " balance is $" << account1.getBalance() << endl;
	cout << "account2: The " << account2.getName() << " balance is $" << account2.getBalance() << endl;

}