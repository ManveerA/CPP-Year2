/* 5- (Separating Digits) Write program segments that accomplish each of the following:

a) Calculate the integer part of the quotient when integer a is divided by integer b.

b) Calculate the integer remainder when integer a is divided by integer b.

c) Use the program pieces developed in a) and b) to write a function that inputs an integer between 1 and 32767 and prints it as 
a series of digits, with two spaces between each digit. For example, the integer 4562 should be printed as:  4 5 6 2

 */

#include <iostream>
using namespace std;


int getInteger(int a, int b) {
    return a / b;
}

int getRemainder(int a, int b) {
    return a % b;
}

void separateNumber(int _number) {
    int number = _number;
    int divisor = 10000;
    
    while (getInteger(number, divisor) == 0) {
        divisor /= 10;
    }

    while (divisor >= 1) {
        int digit = getInteger(number, divisor);
        number = getRemainder(number, divisor);
        
        cout << digit << "  ";
        divisor /= 10;
    }
}

int main()
{
    int input = 0;
   
    cout << "Enter an integer between 1 and 32767" << endl;
    cin >> input;
    separateNumber(input);
    

}