#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex object1;
	Complex object2(2, 4);
	
	std::cout << "object 1: ";
	object1.print();
	
	std::cout << "object 2: ";
	object2.print();

	std::cout << "Adding them: ";
	object1.add(object2.getReal(), object2.getImag());
	object1.print();

	object1 = Complex(); //resetting object

	std::cout << "Subtracting them: ";
	object1.subtract(object2.getReal(),object2.getImag());
	object1.print();
}
