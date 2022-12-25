#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
	:length(1), width(1)
{}
void Rectangle::setLength(float l) {
	if (l > 0 && l <= 20) {
		length = l;
	}
	else {
		std::cout << "Invalid Length. Must be greater than 0 and less than or equal to 20.";
	}
}
void Rectangle::setWidth(float w) {
	if (w > 0 && w <= 20) {
		width = w;
	}
	else {
		std::cout << "Invalid Width. Must be greater than 0 and less than or equal to 20.";
	}
}
float Rectangle::getLength() {
	return length;
}
float Rectangle::getWidth() {
	return width;
}
float Rectangle::calcPerimeter() {
	return length * 2.0 + width * 2.0;
}
float Rectangle::calcArea() {
	return length * width;
}

int main()
{
	float inputL;
	float inputW;
	Rectangle rec1;
	std::cout << "Input the length of the rectangle: ";
	std::cin >> inputL;
	rec1.setLength(inputL);
	std::cout << "Input the width of the rectangle: ";
	std::cin >> inputW;
	rec1.setWidth(inputW);

	std::cout << "\nThe perimeter is " << rec1.calcPerimeter() << "\nThe area is " << rec1.calcArea() << std::endl;
}


