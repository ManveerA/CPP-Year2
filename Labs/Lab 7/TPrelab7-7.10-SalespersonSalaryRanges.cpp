/* Use a one-dimensional array to solve the following problem. A company pays its salespeople on a commission basis. 
The salespeople each receive $200 per week plus 9 percent of their gross sales for that week. For example, a 
salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of $5000, or a total of $650. Write a 
program (using an array of counters) that determines how many of the salespeople earned salaries in each of the 
following ranges (assume that each salesperson’s salary is truncated to an integer amount):
A. $200–299
B. $300–399
C. $400–499
D. $500–599
E. $600–699
F. $700–799
G. $800–899
H. $900–999
I. $1000 and over */

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    const size_t arraySize = 9;
    unsigned int input = 0;
    unsigned int salary = 0;
    unsigned int boundaryCheck = 0;

    array<int, arraySize>counters{};

    for (int i = 1; i <= 10; i++) {
        cout << "Enter the gross sales for salespeople (" << 11 - i << " left to go): $";
        cin >> input;
        salary = input * 0.09 + 200; // Computed salary for initial amount + commission
        boundaryCheck = salary / 100 * 100; // Easy way to use switch statement to check boundary conditions

        switch (boundaryCheck) {
        case(200):
            counters[0]++;
            break;
        case(300):
            counters[1]++;
            break;
        case(400):
            counters[2]++;
            break;
        case(500):
            counters[3]++;
            break;
        case(600):
            counters[4]++;
            break;
        case(700):
            counters[5]++;
            break;
        case(800):
            counters[6]++;
            break;
        case(900):
            counters[7]++;
            break;
        case(1000):
            counters[8]++;
            break;
        default: // Assumes case where salary is outside of 1000-1099 range and that inputs are all valid
            counters[8]++; 
            break;
        }
    }
    cout << "\nSalary Range" << setw(13) << "Count" << endl;
    for (size_t i = 0; i < counters.size(); i++) {
        if (i <= 7) {
            cout << "$" << (i + 2) * 100 << "-" << (i + 2) * 100 + 99 << setw(13) << counters[i] << endl;
        }
        else {
            cout << "$" << (i + 2) * 100 << " and over" << setw(7) << counters[i] << endl;
        }
        }
}
