/* 2-(Sides of a Triangle) Write a program that reads three nonzero double values and determines and prints whether
they could represent the sides of a triangle. */
#include <iostream>

using namespace std;

int main()
{
    double x, y, z;
    cout << "Enter three numbers: " << endl;
    cin >> x >> y >> z;
    
    if ((x + y) > z) { // Triangle inequality: Sum of any two sides of a triangle must always be greater than the third side.
        if ((x + z) > y) {
            if ((y + z) > x) { 
                cout << "The numbers " << x << ", " << y << ", and " << z << " could be side lengths of a triangle." << endl;
            }
            else {
                cout << "The numbers " << x << ", " << y << ", and " << z << " are not possible side lengths of a triangle." << endl;
            }
        }
        else {
            cout << "The numbers " << x << ", " << y << ", and " << z << " are not possible side lengths of a triangle." << endl;
        }
    }
    else {
        cout << "The numbers " << x << ", " << y << ", and " << z << " are not possible side lengths of a triangle." << endl;
    }
}
