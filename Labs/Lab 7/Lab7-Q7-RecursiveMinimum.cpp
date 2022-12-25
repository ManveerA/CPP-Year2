/* Q7- (Find the Minimum Value in an array ) Write a recursive function recursiveMinimum that takes an 
integer array , a starting subscript and an ending subscript as arguments, and returns the smallest 
element of the array . The function should stop processing and return when the starting subscript equals 
the ending subscript */

#include <iostream>
#include <array>

using namespace std;

const size_t arraySize = 10;

int recursiveMinimum(array<int, arraySize> array1, int start, int end)
{
	if (start >= end)
	{
		return array1[end];
	}
	else
	{
		if (array1[start] >= array1[end])
		{
			return recursiveMinimum(array1, start + 1, end);
		}
		else
		{
			return recursiveMinimum(array1, start, end - 1);
		}
	}
}

int main()
{
	array<int, arraySize> a{ 3,6,2,4,5,1,7,8,9,10 };

	cout << "The smallest number is " << recursiveMinimum(a, 0, arraySize - 1) << "\n";
}