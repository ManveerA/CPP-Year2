/* 1- (Factorials) The factorial function is used frequently in probability problems. write a program that uses 
a for statement to evaluate the factorials of the integers from 1 to 5. Print the results in tabular format. 
What difficulty might prevent you from calculating the factorial of 20? */

#include <iostream>

using namespace std;

int calculateFactorial(int _number) {
    int number = _number;
    int i = number - 1;

    for (i; i >= 1; i--) {
        number *= i;
    }
    return number;
}

int main()
{
    cout << "Integer\tFactorial" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << '\t' << calculateFactorial(i) << endl;
    }
}
