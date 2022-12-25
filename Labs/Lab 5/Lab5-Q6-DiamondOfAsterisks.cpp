/* 6- (Diamond of Asterisks) Write a program that prints the following diamond shape. You may use output 
statements that print a single asterisk (*), a single blank or a single newline. Maximize your use of 
repetition (with nested for  statements) and minimize the number of output statements. */


#include <iostream>
using namespace std;
int main()
{
	int s;
	int i, j;

	s = 4;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= s; j++)
			cout << " ";

		s--;

		for (j = 1; j <= (2 * i - 1); j++)
			cout << "*";

		cout << endl;
	}

	s = 1;

	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= s; j++)
			cout << " ";

		s++;

		for (j = 1; j <= (2 * (5 - i) - 1); j++)
			cout << "*";

		cout << endl;
	}

	cout << endl;
	return 0;
}