#include <iostream>

using namespace std;

int main()
{
    int inputDecimal = 0;
    int i = 0;
    int j = 1;
    int binaryNum = 0;
    cout << "Enter a positive integer: ";
    cin >> inputDecimal;

    i = inputDecimal;
   
    while (i > 0) {
        binaryNum = binaryNum + i % 2 * j;
        i = i / 2;
        j = j * 10;
    }
    cout << "The decimal number " << inputDecimal << " has the binary equivalent of " << binaryNum << endl;
}
