/* 3-(Factorial)- Write a program that reads a nonnegative integer and computes and prints its factorial. */
#include <iostream>

using namespace std;

int main()
{
	int inputNum = 0;
	int i = 0;
	long long factorial = 1;

	cout << "Enter a positive integer: ";
	cin >> inputNum;

	i = inputNum; // Stores input in i so that original input does not change

	while (i >= 1) {
		factorial = factorial * i; // Each iteration will multiply current product of the variable by next factor in factorial expression
		i--;
	}
	cout << "The factorial of " << inputNum << " is " << factorial << endl;

}
