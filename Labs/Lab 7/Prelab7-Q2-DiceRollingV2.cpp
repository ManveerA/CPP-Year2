/* Q2- (Dice Rolling) Write a program that simulates the rolling of two dice. The program should use rand to roll the
first die, and should use rand again to roll the second die. The sum of the two values should then be calculated. [Note:
Since each die can show an integer value from 1 to 6, then the sum of the two values will vary from 2 to 12, with 7
being the most frequent sum and 2 and 12 the least frequent sums.] The following figure shows the 36 possible
combinations of the two dice. Your program should roll the two dice 36,000 times. Use a single-subscripted array to
tally the numbers of times each possible sum appears. Print the results in a tabular format. Also, determine if the
totals are reasonable; i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7. */

#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	array<int, 11>results{};

	for (int i = 1; i <= 36000; i++) {
		++results[(rand() % 6) + (rand() % 6)];
	}
	cout << "Sum\tFrequency" << endl;
	for (int i = 0; i < results.size(); i++) {
		cout << i + 2 << "\t" << results[i] << endl;
	}
}
