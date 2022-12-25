/* 3 - (Pythagorean Triples) A right triangle can have sides that are all integers. A set of three integer values
for the sides of a right triangle is called a Pythagorean triple. These three sides must satisfy the relationship
that the sum of the squares of two of the sides is equal to the square of the hypotenuse. Find all
Pythagorean triples for side1, side2 and hypotenuse all no larger than 500. Use a triple-nested for loop that
tries all possibilities. This is an example of brute force computing. You�ll learn in more advanced computer
science courses that there are many interesting problems for which there�s no known algorithmic approach
other than sheer brute force. */

#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 1, c = 1;

	cout << "-- Table of Pythagorean Triples --\n\ta\tb\tc\n" << endl;

	for (a; a <= 500; a++) {
		for (b = a + 1; b <= 500; b++) {
			for (c = b + 1; c <= 500; c++) {
				if (c * c == a * a + b * b) {
					cout <<"\t"<< a << "\t" << b << "\t" << c << endl;
				}
			}
		}
	}
}
