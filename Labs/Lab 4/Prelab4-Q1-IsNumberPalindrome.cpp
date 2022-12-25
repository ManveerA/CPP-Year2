/*1-A palindrome is a number or a text phrase that reads the same backward as forward. For example, each
of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that
reads in a five-digit integer and determines whether or not it’s a palindrome. [Hint: Use the division and
remainder operators to separate the number into its individual digits.]*/
#include <iostream>

using namespace std;

int main()
{
	int inputNum = 0;
	int num1, num2, num3, num4, num5; // Declare variables to store digit values

	cout << "Enter a five-digit integer: ";
	cin >> inputNum;

	num1 = inputNum % 10; // Using modulus operator to retrieve first (rightmost) digit of the integer
	num2 = inputNum / 10 % 10; // Using /10 will floor the integer and then modulus operator will retrieve the next digit
	num3 = inputNum / 100 % 10; 
	num4 = inputNum / 1000 % 10;
	num5 = inputNum / 10000 % 10;

	if (num5 == num1) {
		if (num4 == num2) { // The middle digit does not matter
			cout << "\nThe integer " << inputNum << " is a palindrome." << endl;
		}
		else {
			cout << "\nThe integer " << inputNum << " is not a palindrome." << endl;
		}
	}
	else {
		cout << "\nThe integer " << inputNum << " is not a palindrome." << endl;
	}
}
