/* The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the two numbers. 
Write a program that reads two integer numbers and prints their greatest common divisor. */

#include <iostream>
using namespace std;

int main()
{
    int input1 = 0;
    int input2 = 0;

    cout << "Enter two integers: " << endl;
    cin >> input1 >> input2;
    int smallerNum = input1;
    int largerNum = input2;

    if (input2 <= input1) {
        smallerNum = input2;
        largerNum = input1;
    }

    for (int i = smallerNum; i >= 1; i--) {
        if (smallerNum % i == 0 && largerNum % i == 0)
        {
            cout << "The greatest common divisor is " << i << "." << endl;
            break;
        }
    }
}