/* 7-(Calculating ) Calculate the value of from the infinite series. Print a table that shows the 
approximate value of after each of the first 1000 terms of this series. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 0;
	cout << setprecision(7);

	for (int a = 1, value = 1; a <= 1000; a++, value += 2)
	{

		if (a % 2 == 1)
			pi += (4.0 / value);

		else
			pi -= (4.0 / value);
		cout << a << " = " << pi << endl;
	}

}

