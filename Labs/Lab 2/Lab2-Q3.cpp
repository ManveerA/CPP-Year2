#include <iostream>

using namespace std;

/*Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by 
three spaces each. [Hint: Use the integer division and modulus operators.]*/

int main()
{
	int integer = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	cout << "Enter a 5-digit integer: " << endl;
	cin >> integer;
	num1 = integer / 10;
	num2 = num1 / 10;
	num3 = num2 / 10;
	num4 = num3 / 10;
	cout << num4 % 10<< "   ";
	cout << num3 % 10 << "   ";
	cout << num2 % 10 << "   ";
	cout << num1 % 10 << "   ";
	cout << integer % 10 << "   ";

}
