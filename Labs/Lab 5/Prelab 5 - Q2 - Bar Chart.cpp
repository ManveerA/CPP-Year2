/* 2 - (Bar Chart) One interesting application of computers is drawing graphs and bar charts. Write a program
that reads five numbers (each between 1 and 30). Assume that the user enters only valid values. For each
number that is read, your program should print a line containing that number of adjacent asterisks. For
example, if your program reads the number 7, it should print *******. */

#include <iostream>

using namespace std;

int main()
{
	int input1 = 0;
	int input2 = 0;
	int input3 = 0;
	int input4 = 0;
	int input5 = 0;

	cout << "Enter five integers between 1 and 30\n" << endl;
	cin >> input1 >> input2 >> input3 >> input4 >> input5;

	for (input1; input1 >= 1; input1--) {
		cout << "*";
	}
	cout << "\n";
	for (input2; input2 >= 1; input2--) {
		cout << "*";
	}
	cout << "\n";
	for (input3; input3 >= 1; input3--) {
		cout << "*";
	}
	cout << "\n";
	for (input4; input4 >= 1; input4--) {
		cout << "*";
	}
	cout << "\n";
	for (input5; input5 >= 1; input5--) {
		cout << "*";
	}
}
