#include <iostream>

using namespace std;

int main()
{
    int integer1, integer2;
    cout << "Enter two integers: ";
    cin >> integer1;
    cin >> integer2;
    if (integer1 > integer2) {
        cout << integer1 << " is larger.";
    }
    if (integer2 > integer1) {
        cout << integer2 << " is larger.";
    }
    if (integer1 == integer2) {
        cout << "These numbers are equal.";
    }
}
