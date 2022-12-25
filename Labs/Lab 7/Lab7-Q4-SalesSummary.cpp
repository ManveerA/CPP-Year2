/* Q4- (Sales Summary) Use a two-dimensional array to solve the following problem. A company has 
four salespeople (1 to 4) who sell five different products (1 to 5). Once a day, each salesperson 
passes in a slip for each different type of product sold. Each slip contains the following:

a) The salesperson number

b) The product number

c) The total dollar value of that product sold that day

Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information
from all of the slips for last month is available. Write a program that will read all this 
information for last month’s sales (one salesperson’s data at a time) and summarize the total 
sales by salesperson by product. All totals should be stored in the two-dimensional array sales. 
After processing all the information for last month, print the results in tabular format with 
each of the columns representing a particular salesperson and each of the rows representing a 
particular product. Cross total each row to get the total sales of each product for last month; 
cross total each column to get the total sales by salesperson for last month. Your tabular 
printout should include these cross totals to the right of the totaled rows and to the bottom of 
the totaled columns. */


#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
	array<array<int, 5>, 4> sales{};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int input = 0;
			cout << "Salesperson " << i + 1 << ": Enter sales for product " << j + 1 << ": $";
			cin >> input;
			sales[i][j] = input;
		}
	}

	cout << "\nSalesperson\t1\t2\t3\t4\tTotal (product)\n";

	for (int j = 0; j < 5; j++)
	{
		int totalProduct = 0;
		if (j < 5)
		{
			cout << "Product " << j + 1 << "\t";
		}
		for (int i = 0; i < 4; i++)
		{
			totalProduct += sales[i][j];
			cout << "$" << sales[i][j] << "\t";
		}
		cout << "$" << totalProduct << endl;
	}
	cout << "Total (person)\t";
	for (int row = 0; row < 4; row++)
	{
		int totalPerson = 0;

		for (int column = 0; column < 5; column++)
		{
			totalPerson += sales[row][column];
		}
		cout << "$" << totalPerson << "\t";
	}
	cout << endl;
}