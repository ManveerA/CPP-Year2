/* Write a recursive program to visualize factorial. For each recursive call, display the outputs on a separate line and 
add a level of indentation as shown below. */
// 0!= 1
// 1!= 1
// number = 2
// 2!= 2
// number = 3
// number = 2
// 3!= 6

#include <iostream>
using namespace std;

unsigned long long factorial(unsigned number);

int main()
{
    int input = 0;
    while (input != -1) {
        cout << "Enter a number to compute its factorial (enter -1 to stop): ";
        cin >> input;
        cout << input << "! = " << factorial(input) << endl;
    }
}

unsigned long long factorial(unsigned number) {
    if (number <= 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}
