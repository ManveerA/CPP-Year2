/*7- (Sales Commission Calculator) A large company pays its salespeople on a commission basis.

The salespeople each receive $200 per week plus 9% of their gross sales for that week. 
For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 
9% of $5000, or a total of $650. Develop a C++ program that uses a while statement to input 
each salesperson’s gross sales for last week and calculates and displays that salesperson’s 
earnings. Process one salesperson’s figures at a time.*/
#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    double grossSales = 0;
 
    while (i != -1) {
        cout << "Enter gross sales: $";
        cin >> grossSales;
        cout << "Total earnings for last week from gross sales of $" << grossSales << " is $" << 200 + 0.09 * grossSales << endl;
        
        cout << "\nAre there more sales to input information for?\nEnter any other integer to continue inputting or enter -1 to stop." << endl;
        cin >> i;
    }
    cout << "\n\nEarnings checking program complete!";
}
