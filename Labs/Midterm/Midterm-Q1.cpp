/* Write a recursive function template that calculates base exponent . The exponent is an integer value, but the 
base can be an int or a float value. Your main program has to call and test the function for both int and float values.  
 */


#include <iostream>
using namespace std;

float calculateExponent(float base, int exponent) {
	if (exponent == 0) { // Exponent 0 gives result of 1 and this will terminate other exponent increment or decrement
		return 1;
	}
	else if (exponent > 0) { //Positive exponent case
		return base * calculateExponent(base, exponent - 1); //Recursive; 2^4 = 2*2^3 = 2*2*2^2...
	}
	else if (exponent < 0) { //Negative exponent case
		base =  base * calculateExponent(base, exponent + 1); //Recursive; 2^-4 = (1/2)*2^-3 = (1/2)*(1/2)*2^-2...
		return base;
	}
}

int main()
{
	cout << "From the function calculateExponent, " << 5 << "^" << 3 << " is equal to " << calculateExponent(5, 3) << endl; //Test for integer base
	cout << "From the function calculateExponent, " << 5.5 << "^" << 3 << " is equal to " << calculateExponent(5.5, 3) << endl; //Test for float base
	cout << "From the function calculateExponent, " << -5<< "^" << 3 << " is equal to " << calculateExponent(-5, 3) << endl; //Test for negative base
	cout << "From the function calculateExponent, " << 5 << "^" << -3 << " is equal to " << 1/calculateExponent(5, -3) << endl; //Test for negative exponent
}