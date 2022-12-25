#include <iostream>
#include <string>
#include "RationalNumber.h"
using namespace std;
int main()
{
	RationalNumber num1(7, 3);
	RationalNumber num2(1, 3);
	std::cout << "num1: " << num1.toString() << std::endl;
	std::cout << "num2: " << num2.toString() << std::endl;

	RationalNumber sum = num1 + num2;
	std::cout << num1.toString() + " + " << num2.toString() << " = " << sum.toString() << std::endl;

	RationalNumber difference = num1 - num2;
	std::cout << num1.toString() + " - " << num2.toString() << " = " << difference.toString() << std::endl;

	RationalNumber product = num1 * num2;
	std::cout << num1.toString() + " * " << num2.toString() << " = " << product.toString() << std::endl;

	RationalNumber quotient = num1 / num2;
	std::cout << num1.toString() + " / " << num2.toString() << " = " << quotient.toString() << std::endl;

	std::cout << "num1 == num2? " << (num1 == num2) << std::endl;
	std::cout << "num1 != num2? " << (num1 != num2) << std::endl;
	std::cout << "num1 > num2? " << (num1 > num2) << std::endl;
	std::cout << "num1 < num2? " << (num1 < num2) << std::endl;
	std::cout << "num1 >= num2? " << (num1 >= num2) << std::endl;
	std::cout << "num1 <= num2? " << (num1 <= num2) << std::endl;
}
