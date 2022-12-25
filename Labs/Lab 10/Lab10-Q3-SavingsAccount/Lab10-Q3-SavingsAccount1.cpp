#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

int main()
{
	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);

	std::cout << fixed << setprecision(2);

	saver1.modifyInterestRate(0.03);
	saver2.modifyInterestRate(0.03);

	std::cout << "For saver1, the balance after calculating and adding monthly interest is $" << saver1.calculateMonthlyInterest() << std::endl;
	std::cout << "For saver2, the balance after calculating and adding monthly interest is $" << saver2.calculateMonthlyInterest() << std::endl;

	std::cout << "\nModifying interest rates..." << std::endl;

	saver1.modifyInterestRate(0.04);
	saver2.modifyInterestRate(0.04);

	std::cout << "\nFor saver1, the balance after calculating and adding monthly interest is $" << saver1.calculateMonthlyInterest() << std::endl;
	std::cout << "For saver2, the balance after calculating and adding monthly interest is $" << saver2.calculateMonthlyInterest() << std::endl;
}
