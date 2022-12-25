#include <iostream>

using namespace std;

int printBar(int _number) {
	int number = _number;

	int i = number;
	for (i; i >= 1; i--) {
		cout << "*";
	}
	cout << " ";
		return number;
}

int main()
{
	int input1 = 0, input2 = 0, input3 = 0, input4 = 0, input5 = 0;

	cout << "Enter five integers between 1 and 30:" << endl;
	cin >> input1 >> input2 >> input3 >> input4 >> input5;

	cout << printBar(input1) << endl;
	cout << printBar(input2) << endl;
	cout << printBar(input3) << endl;
	cout << printBar(input4) << endl;
	cout << printBar(input5) << endl;
}
