/* 4-(Printing the Decimal Equivalent of a Binary Number) Input an integer containing only 0s and 1s (i.e., a
“binary” integer) and print its decimal equivalent. Use the modulus and division operators to pick off the
“binary” number’s digits one at a time from right to left. Much as in the decimal number system, where the
rightmost digit has a positional value of 1, the next digit left has a positional value of 10, then 100, then
1000, and so on, in the binary number system the rightmost digit has a positional value of 1, the next digit
left has a positional value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted
as 2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4
+ 8, or 13. */
#include <iostream>

using namespace std;

int main()
{
	int inputBinary = 0;
	int i = 0;
	int decimalNum = 0;
	int indexValue = 1;

	cout << "Enter a binary number: ";
	cin >> inputBinary;

	i = inputBinary; // Store input in i so that original input is unchanged

	while (i > 0) {
		// If statement to check if first (rightmost) digit of i is 0 or 1; 0 will not add anything to decimalNum
		decimalNum = decimalNum + (i%10)*indexValue; // If index position is 1, adds the index position value corresponding a power of 2
		indexValue = indexValue * 2; // Increases the power of 2 corresponding to a new index position in the binary num
									 // indexValue increases regardless of whether i % 10 was 1 or 0 
		i = i / 10; // Removes the rightmost digit of i so that i % 10 will check if the next digit is a 1 or 0
	}
	cout << "The binary number " << inputBinary << " has a decimal equivalent of " << decimalNum << endl;
}
