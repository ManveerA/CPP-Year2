#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    cout << "Enter an integer: " << endl;
    cin >> i;
    if (i % 2 == 0) {
        cout << "The integer is even.";
    }
    if (i % 2 != 0) {
        cout << "The integer is odd.";
    }
}
