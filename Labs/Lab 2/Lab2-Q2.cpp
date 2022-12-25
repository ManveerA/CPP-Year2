#include <iostream>

/*
Write a program that reads in two integers and determines 
and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]*/

using namespace std;


int main()
{
    int integer1 = 0;
    int integer2 = 0;
    cout << "Enter two integers: " << endl;
    cin >> integer1 >> integer2;
    if (integer1 % integer2 == 0) {
        cout << "The first integer is a multiple of the second.";
    }
    if (integer1 % integer2 != 0) {
        cout << "The first integer is not a multiple of the second.";
    }
}
