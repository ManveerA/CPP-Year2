/*8- (Find the Largest) The process of finding the largest number (i.e., the maximum of a 
group of numbers) is used frequently in computer applications. For example, a program that 
determines the winner of a sales contest inputs the number of units sold by each salesperson. 
The salesperson who sells the most units wins the contest. Write a C++ program that uses a 
while statement to determine and print the largest number of 10 numbers input by the user. 
Your program should use three variables, as follows:

counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input 
and to determine when all 10 numbers have been processed).

number: The current number input to the program.

largest: The largest number found so far.*/
#include <iostream>

using namespace std;

int main()
{
    int counter = 1;
    int number = 0;
    int largest = 0;

    while (counter <= 10) {
        cout << "Enter a number (" << 11 - counter << " left to go): ";
        cin >> number;

        if (number >= largest) {
            largest = number;
        }
        cout << "\nThe largest number inputted is " << largest << endl;
        counter++;
    }
    
}
