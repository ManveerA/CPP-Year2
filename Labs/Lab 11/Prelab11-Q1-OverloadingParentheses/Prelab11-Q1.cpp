#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
	DoubleSubscriptedArray array1(3, 3);
	DoubleSubscriptedArray array2(3, 3);

	std::cout << "The first DoubleSubscriptedArray object, array1, is initialized." << std::endl;
	std::cout << "Outputting array1: \n" << array1;

	std::cout << "The second DoubleSubscriptedArray object, array2, is initialized." << std::endl;
	std::cout << "Outputting array2: \n";
	std::cout << array1;

	std::cout << "Testing overloaded operators..." << std::endl;

	std::cout << "array1 == array2? " << (array1 == array2) << std::endl;
	std::cout << "array1 != array2? " << (array1 != array2) << std::endl;

	std::cout << "Outputting array1(1,1): " << array1(1, 1) << std::endl;
	std::cout << "Assigning the value 5 to array1(1,1)..." << std::endl;
	array1(1, 1) = 5;
	std::cout << "Outputting array1(1,1): " << array1(1, 1) << std::endl;
	std::cout << "\nOutputting array1:\n" << array1;
	std::cout << "array1 == array2? " << (array1 == array2) << std::endl;
	std::cout << "array1 != array2? " << (array1 != array2) << std::endl;

	std::cout << "\nTesting the assignment operator by assigning array1 to array2..." << std::endl;
	array2 = array1;
	std::cout << "Outputting array1 and array2: \n\n" << array1 << array2;

	DoubleSubscriptedArray array3(3, 3);

	std::cout << "\nThe third DoubleSubscriptedArray object, array3, is uninitialized and empty." << std::endl;
	std::cout << "Taking user input for array3..." << std::endl;
	std::cin >> array3;

	std::cout << "\nOutputting array3: \n" << array3;
	std::cout << "Testing overloaded boolean operators with array3...\n" << std::endl;

	std::cout << "array3 == array1? " << (array3 == array1) << std::endl;
	std::cout << "array3 != array1? " << (array3 != array1) << std::endl;

}
