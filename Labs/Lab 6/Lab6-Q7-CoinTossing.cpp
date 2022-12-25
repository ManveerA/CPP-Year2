/* 7- (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the program should print 
Heads or Tails. Let the program toss the coin 100 times, and count the number of times each side of the coin appears. 
Print the results. The program should call a separate function flip that takes no arguments and returns 0 for tails 
and 1 for heads. [Note: If the program realistically simulates the coin tossing, then each side of the coin should 
appear approximately half the time for a total of approximately 50 heads and 50 tails. */

#include <iostream>
#include <cstdlib>
using namespace std;


bool flip() {
    return (rand() % 2 == 0);
}


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int numHeads = 0;
    int numTails = 0;
    int flipResult = 0;
    for (int i = 1; i <= 100; i++) {
        flipResult = flip();
        if (flipResult == 0) {
            cout << "Tails " << flipResult << endl;
            numHeads += 1;
        }
        else {
            cout << "Heads " << flipResult << endl;
            numTails += 1;
        }
    }
    cout << "Heads: " << numHeads << '\t' << "Tails: " << numTails;

}
