/* 6 (Perfect Numbers) An integer number is said to be a perfect number if its factors, including 1 (but
not the number itself), sum to the number. For example, 6 is a perfect number because 6 =1 + 2 + 3. Write
a function perfect that determines if parameter number is a perfect number. Use this function in a program
that determines and prints all the perfect numbers between 1 and 1000. Print the factors of each perfect
number to confirm that the number is indeed perfect. Challenge the power of your computer by testing
numbers much larger than 1000.
 */

#include <iostream>
using namespace std;


bool perfect(int _number) {
	int number = _number;
	int sum = 0;
	for (int i = 1; i <= number / 2; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}
	return (number == sum);

}

int main()
{
	
	for (int i = 1; i <= 1000; i++) {
		if (perfect(i)) {
			cout << "The number " << i << " is a perfect number." << endl;
			cout << "The factors are ";
			for (int j = 1; j <= i / 2; j++) {
				if (i % j == 0) {
					cout << j << " ";
				}
			}
			cout << endl;
		}
	}
}
