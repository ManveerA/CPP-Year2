/* Q1-(Duplicate Elimination) Use a one-dimensional array to solve the following problem. Read in 20 numbers, each 
of which is between 10 and 100, inclusive. As each number is read, validate it and store it in the array only if it isn’t a 
duplicate of a number already read. After reading all the values, display only the unique values that the user entered. 
Provide for the “worst case” in which all 20 numbers are different. Use the smallest possible array to solve this 
problem. */

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 20>a{};
    int input = 0;

    for (int i = 0; i < a.size(); i++) {
        cout << "Enter a number between 10 and 100 (" << 20 - i << " left to go):";
        cin >> input;
        bool unique = true;

        for (int j = 0; j <= i; j++) {
            if (input == a[j]) {
                unique = false;
                break;
            }
        }
        if (unique) {
            a[i] = input;
        }
    }
    cout << "\nThe unique numbers entered are ";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }
}
