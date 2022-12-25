/* 4 - (Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit purchased Manhattan Island for $24.00
in barter. Did he make a good investment? To answer this question, modify the compound interest program
of Fig. 5.6 to begin with a principal of $24.00 and to calculate the amount of interest on deposit if that
money had been kept on deposit until this year (e.g., 384 years through 2010). Place the for loop that
performs the compound interest calculation in an outer for loop that varies the interest rate from 5% to
10% to observe the wonders of compound interest. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	double principal = 24.00;
	double rate = 0.05;
	double interest = 0;
	long double amount = 0;

	cout << "The principal is $" << principal << endl;

	for (rate; rate <= 0.10; rate += 0.01) {
		amount = principal;
		for (int year = 1; year <= 384; year++) {
			interest = rate * amount;
			amount += interest;
		}
		cout << "\nThe total amount after 384 years of compounding at " << rate * 100 << "% interest is $" << amount << endl;
	}
}
