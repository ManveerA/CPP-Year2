/* Q3- Write a recursive function that returns the sum of an array elements. Test your program with the following array.
 const size_t arraySize{ 20 };
 array<int, arraySize> a{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }; */

#include <iostream>
#include <array>

using namespace std;

const size_t arraySize{ 20 };

int sum(array<int, arraySize>array, int arrayLength) {
	if (arrayLength <= 0) {
		return array[0];
	}
	else {
		return array[arrayLength] + sum(array, arrayLength - 1);
	}
}

int main()
{
	array<int, arraySize>a{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	cout << sum(a, arraySize - 1);
}
