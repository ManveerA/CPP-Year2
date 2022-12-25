#include <iostream>

using namespace std;

int main()
{
	int principal = 1000 * 100;
	int year = 1;
	int interest = 0;
	int amount = principal;
	cout << "The principal is " << principal / 100 << "." << principal % 100 << endl;
	while (year <= 10) {
		interest = amount * 5;
		if (interest % 100 >= 50) {
			interest = (interest + 100) / 100;
		}
		else {
			interest = interest / 100;
		}
		amount = amount + interest;
		year++;
		cout << "Amount is $" << amount / 100 << "." << amount % 100 << endl;
	}
}
