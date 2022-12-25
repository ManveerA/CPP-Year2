#include <iostream>

using namespace std;

int main()
{
    float pi = 3.14159;
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The diameter of the circle is " << 2 * r;
    cout << "\nThe circumference of the circle is " << 2 * r * pi;
    cout << "\nThe area of the circle is " << r * r * pi;
}
