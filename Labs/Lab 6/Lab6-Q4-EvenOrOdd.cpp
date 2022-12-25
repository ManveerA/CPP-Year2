/* (Even or Odd) Write a program that inputs a series of integers and passes them one at a time to function is Even, which uses the 
remainder operator to determine whether an integer is even. The function should take an integer argument and return 1 if the integer 
is even and 0 otherwise. */

#include <iostream>
using namespace std;

bool isEven(int _number) {
    int number = _number;
    return (number % 2 == 0);
}

int main()
{
    int i = 0;
    while (i != -1) {
        cout << "Enter an integer (input -1 to stop): " << endl;
        cin >> i;
        cout << isEven(i) << endl;
    }
    
}
