#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
#include "ChequingAccount.h"
using namespace std;

int main()
{
	std::cout << fixed << setprecision(2);
	Account account1(25);
	SavingsAccount account2(25, 0.03);
	ChequingAccount account3(80, 1.00);

	std::cout << "Account 1 is an Account object" << std::endl;
	std::cout << "Account 2 is a SavingsAccount object" << std::endl; 
	std::cout<<"Account 3 is a ChequingAccount object" << std::endl;

	std::cout << "\nAccount 1 Balance: $" << account1.getBalance() << std::endl;
	std::cout << "Account 2 Balance: $" << account2.getBalance() << std::endl;
	std::cout << "Account 3 Balance: $" << account3.getBalance() << std::endl;

	std::cout << "\nAttempting to debit $30.00 from Account 2" << std::endl;
	account2.debit(30);

	std::cout << "\nAttempting to debit $40.00 from Account 3" << std::endl;
	account3.debit(40);

	std::cout << "\nAccount 1 Balance: $" << account1.getBalance() << std::endl;
	std::cout << "Account 2 Balance: $" << account2.getBalance() << std::endl;
	std::cout << "Account 3 Balance: $" << account3.getBalance() << std::endl;

	std::cout << "\nCrediting $40.00 to Account 1" << std::endl;
	account1.credit(40);

	std::cout << "\nCrediting $65.00 to Account 2" << std::endl;
	account2.credit(65);

	std::cout << "\nCrediting $20.00 to Account 3" << std::endl;
	account3.credit(20);

	std::cout << "\nAccount 1 Balance: $" << account1.getBalance() << std::endl;
	std::cout << "Account 2 Balance: $" << account2.getBalance() << std::endl;
	std::cout << "Account 3 Balance: $" << account3.getBalance() << std::endl;

	std::cout << "\nAdding $" << account2.calculateInterest() << " interest to Account 2" << std::endl;
	account2.credit(account2.calculateInterest());
	std::cout << "\nAccount 2 Balance: $" << account2.getBalance() << std::endl;
}
