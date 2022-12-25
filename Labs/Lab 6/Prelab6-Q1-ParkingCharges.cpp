/* 1- (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours and an
additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge for any
given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a
program that will calculate and print the parking charges for each of three customers who parked their cars
in this garage yesterday. You should enter the hours parked for each customer. Your program should print
the results in a neat tabular format, and should calculate and print the total of yesterday's receipts. The
program should use the function calculateCharges to determine the charge for each customer. */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateCharges(double _hours) {
	double hours = _hours;
	double total = 2.00;
	if (hours > 3.0) {
		total += ceil(hours - 3.0) * 0.50;
	}
	if (total > 10.00) {
		total = 10.00;
	}
	return total;
}

int main()
{
	cout << fixed << setprecision(2);
	double hoursCar1 = 0;
	double hoursCar2 = 0;
	double hoursCar3 = 0;

	cout << "Enter the number of hours for car 1: ";
	cin >> hoursCar1;

	cout << "Enter the number of hours for car 2: ";
	cin >> hoursCar2;

	cout << "Enter the number of hours for car 3: ";
	cin >> hoursCar3;

	cout << "\nCar" << '\t' << "Hours" << '\t' << "Charge" << endl;
	cout << "1" << '\t' << setprecision(1) << hoursCar1 << '\t' << setprecision(2) << calculateCharges(hoursCar1) << endl;
	cout << "2" << '\t' << setprecision(1) << hoursCar2 << '\t' << setprecision(2) << calculateCharges(hoursCar2) << endl;
	cout << "3" << '\t' << setprecision(1) << hoursCar3 << '\t' << setprecision(2) << calculateCharges(hoursCar3) << endl;
	cout << "TOTAL" << '\t' << setprecision(1) << hoursCar1 + hoursCar2 + hoursCar3 << '\t' << setprecision(2) << calculateCharges(hoursCar1) + calculateCharges(hoursCar2) + calculateCharges(hoursCar3);


}

