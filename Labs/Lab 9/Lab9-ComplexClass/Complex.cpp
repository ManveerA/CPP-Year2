#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double _realNum, double _imagNum)
{
	realNum = _realNum;
	imagNum = _imagNum;
}

double Complex::getReal() {
	return realNum;
}

double Complex::getImag() {
	return imagNum;
}

void Complex::add(double i, double j) {
	realNum = realNum + i;
	imagNum = imagNum + j;
}

void Complex::subtract(double i, double j) {
	realNum = realNum - i;
	imagNum = imagNum - j;
}

void Complex::print() {
	std::cout << realNum << " + " << imagNum << "i" << std::endl;
}
