/* 3- (Celsius and Fahrenheit Temperatures) Implement the following integer functions: 
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents
of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit 
temperatures from 32 to 212 degrees. Print the outputs in a neat tabular format that minimizes the number 
of lines of output while remaining readable. */

#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int _number) { //Function for part a)
    int number = _number;
    int celsiusValue = (number - 32) * 5 / 9;
    return celsiusValue;
}

int fahrenheit(int _number) { //Function for part b)
    int number = _number;
    int fahrenheitValue = 9 * number / 5 + 32;
    return fahrenheitValue;
}

int main()
{
    cout << "Fahrenheit Temperature     Celsius Conversion" << '\t' << "Celsius Temperature     Fahrenheit Conversion" << endl;
    for (int i = 32; i <= 212; i++) {
        cout << setw(19) << i << setw(26) << celsius(i) << '\t';
        if (i - 32 <= 100) {
            cout << setw(23) << i - 32 << setw(23) << fahrenheit(i - 32) << endl;
        }
        else {
            cout << endl;
        }
    }
}
