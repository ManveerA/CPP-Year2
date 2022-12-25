#include <iostream>

using namespace std;

int main()
{
    double e = 1;
    int factorial = 1;
    int i = 1;
    int term = 1;

    while (term <= 11) {
        i = term;
        factorial = 1;
        while (i >= 1) {
            factorial = factorial * i;
            i--;
        }
        e = e + 1.0 / factorial;
        term++;
    }
    cout << "e is approximately " << e << endl;
}
