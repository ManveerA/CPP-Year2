#include <iostream>

using namespace std;

void printBar(int _number) {
	int number = _number;

	int i = number;
	for (i; i >= 1; i--) {
		cout << "*";
	}
	cout << "\n";
}

int main()
{
	int input1 = 0, input2 = 0, input3 = 0, input4 = 0, input5 = 0;

	cout << "Enter five integers between 1 and 30:" << endl;
	cin >> input1 >> input2 >> input3 >> input4 >> input5;

	printBar(input1);
	printBar(input2);
	printBar(input3);
	printBar(input4);
	printBar(input5);
}
