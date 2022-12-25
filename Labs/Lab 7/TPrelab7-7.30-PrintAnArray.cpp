/* 7.30 (Print an array ) Write a recursive function printArray that takes an array , a starting subscript
and an ending subscript as arguments, returns nothing and prints the array . The function should stop
processing and return when the starting subscript equals the ending subscript. */

#include <iostream>
#include <array>

using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize>a, int start, int end) {
	if (start == end) {
		cout << a[start] << " ";
		return;
	}
	else if (start > end) {
		return;
	}
	else {
		cout << a[start] << " " << a[end] << " ";
		printArray(a, start + 1, end - 1);
		return;
	}
}

int main()
{
	unsigned int s = 0;
	unsigned int e = 0;
	array<int, arraySize>array1{ 0,1,2,3,4,5,6,7,8,9 };
	
	cout << "array = {";
	for (size_t i = 0; i < array1.size(); i++) {
		if (i != 9) {
			cout << array1[i] << ", ";
		}
		else {
			cout << array1[i] << "}" << endl;
		}
	}
	cout << "Enter the range of the array to print." << endl;
	cout << "Starting Subscript: ";
	cin >> s;
	cout << "Ending Subscript: ";
	cin >> e;
	printArray(array1, s, e);

}
