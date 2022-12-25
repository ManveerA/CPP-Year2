#include <iostream>
using namespace std;

/*Create an application that calculates your daily driving cost, so that you can estimate how much money 
could be saved by car pooling, which also has other advantages such as reducing carbon emissions and 
reducing traffic congestion. The application should input the following information and display the user’s 
cost per day of driving to work:

a) Total miles driven per day.

b) Cost per gallon of gasoline.

c) Average miles per gallon.

d) Parking fees per day.

e) Tolls per day.*/

int main()
{
    int miles = 0;
    int costpg = 0;
    int mpg = 0;
    int fees = 0;
    int tolls = 0;
    cout << "Enter the total miles driven per day: " << endl;
    cin >> miles;
    cout << "Enter the cost per gallon of gasoline: " << endl;
    cin >> costpg;
    cout << "Enter the average miles per gallon: " << endl;
    cin >> mpg;
    cout << "Enter the parking fees per day: " << endl;
    cin >> fees;
    cout << "Enter the tolls per day: " << endl;
    cin >> tolls;

    cout << "The total cost per day of driving to work is $" << miles * costpg / mpg + fees + tolls;
    
}