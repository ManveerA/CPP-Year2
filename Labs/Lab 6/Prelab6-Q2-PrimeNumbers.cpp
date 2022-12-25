/* 2- (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. 
a) Write a function that determines if a number is prime.
b) Use this function in a program that determines and prints all the prime numbers between 1 and 10,000. 
How many of these 10,000 numbers do you really have to test before being sure that you have found all 
the primes?
c) Initially you might think that n/2 is the upper limit for which you must test to see if a number is prime, 
but you need go only as high as the square root of n. Why? Rewrite the program, and run it both ways.  */

#include <iostream>
#include <cmath>
using namespace std;

void isPrimeV1(int _number) { //Function for part a)
    int number = _number;
    int j = 0;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            j = 1;
            break;
        }
    }
    if (j == 0) {
        cout << number << endl;
    }
}
void isPrimeV2(int _number) { //Function for part c)
    int number = _number;
    int j = 0;
    for (int i = 2; i <= floor(sqrt(number)); i++) {
        if (number % i == 0) {
            j = 1;
            break;
        }
    }
    if (j == 0) {
        cout << number << endl;
    }
}

int main()
{
    cout << "The following numbers from 2 to 10,000 are prime numbers:" << endl;
    for (int i = 2; i <= 10000; i++) {
        isPrimeV2(i);
    }
}
