#include <iostream>

using namespace std;

int integer1 = 0;
int integer2 = 0;
int integer3 = 0;

int main()
{
    cout << "Enter three different integers: " << endl;
    cin >> integer1 >> integer2 >> integer3;
    cout << "The sum is " << integer1 + integer2 + integer3 << endl;
    cout << "The average is " << (integer1 + integer2 + integer3) / 3 << endl;
    cout << "The product is " << integer1 * integer2 * integer3 << endl;
    if (integer1 > integer2) {
        if (integer1 > integer3) {
            cout << "The largest is " << integer1 << endl;
        }
    }
        if (integer2 > integer1) {
            if (integer2 > integer3) {
                cout << "The largest is " << integer2 << endl;
            }
        }
        if (integer3 > integer1) {
            if (integer3 > integer2) {
                cout << "The largest is " << integer3 << endl;
            }
        }
        if (integer1 < integer2) {
            if (integer1 < integer3) {
                        cout << "The smallest is " << integer1 << endl;
                    }
        }
        if (integer2 < integer1) {
            if (integer2 < integer3) {
                        cout << "The smallest is " << integer2 << endl;
                    }
        }
        if (integer3 < integer1) {
            if (integer3 < integer1) {
                        cout << "The smallest is " << integer3 << endl;
                    }
                }
            
        
    }
