#include "RationalNumber.h"
#include <iostream>

using namespace std;

RationalNumber::RationalNumber(int num, int den) {
	numerator = num;
	if (den == 0) {
		std::cout << "Error: Denominator cannot be 0. Setting to 1." << std::endl;
		denominator = 1;
	}
	else if (den < 0) {
		numerator *= -1;
		denominator = den;
	}
	else {
		denominator = den;
	}
	reduce();
}

std::string RationalNumber::toString(){
	if (numerator == 0) {
		return "0";
	}
	else if (denominator == 1) {
		std::string s = std::to_string(numerator);
		return s;
	}
	else {
		std::string s = std::to_string(numerator) + "/" + std::to_string(denominator);
		return s;
	}
}

void RationalNumber::reduce() {
	int larger = denominator;
	int GCF = 1;
	if (numerator > denominator) {
		larger = numerator;
	}
	for (int i = 1; i <= larger; i++) {
		if (numerator % i == 0 && denominator % i == 0) {
			GCF = i;
		}
	}
	numerator /= GCF;
	denominator /= GCF;
}

RationalNumber RationalNumber::operator+(RationalNumber& rn) {
	int larger = denominator;
	if (rn.denominator > denominator) {
		larger = rn.denominator;
	}
	int LCD = larger;
	while (1) {
		if (LCD % denominator == 0 && LCD % rn.denominator == 0) {
			numerator *= LCD / denominator;
			rn.numerator *= LCD / rn.denominator;
			denominator = LCD;
			rn.denominator = LCD;
			break;
		}
		LCD++;
	}
	RationalNumber sum(numerator + rn.numerator, LCD);
	reduce();
	rn.reduce();
	sum.reduce();
	return sum;
}

RationalNumber RationalNumber::operator-(RationalNumber& rn) {
	int larger = denominator;
	if (rn.denominator > denominator) {
		larger = rn.denominator;
	}
	int LCD = larger;
	while (1) {
		if (LCD % denominator == 0 && LCD % rn.denominator == 0) {
			numerator *= LCD / denominator;
			rn.numerator *= LCD / rn.denominator;
			denominator = LCD;
			rn.denominator = LCD;
			break;
		}
		LCD++;
	}
	RationalNumber difference(numerator - rn.numerator, LCD);
	reduce();
	rn.reduce();
	difference.reduce();
	return difference;
}

RationalNumber RationalNumber::operator*(RationalNumber& rn) {
	RationalNumber product(numerator * rn.numerator, denominator * rn.denominator);
	product.reduce();
	return product;
}

RationalNumber RationalNumber::operator/(RationalNumber& rn) {
	RationalNumber temp(rn.denominator, rn.numerator);
	RationalNumber quotient(numerator * temp.numerator, denominator * temp.denominator);
	quotient.reduce();
	return quotient;
}

bool RationalNumber::operator==(RationalNumber& rn) {
	reduce();
	rn.reduce();
	if (numerator == rn.numerator && denominator == rn.denominator)
		return true;
	return false;
}

bool RationalNumber::operator!=(RationalNumber& rn) {
	return !operator==(rn);
}

bool RationalNumber::operator>(RationalNumber& rn) {
	RationalNumber difference = operator-(rn);
	if (difference.numerator > 0) {
		return true;
	}
	return false;
}

bool RationalNumber::operator<(RationalNumber& rn) {
	if (!operator>(rn) && !operator==(rn)) {
		return true;
	}
	return false;
}

bool RationalNumber::operator>=(RationalNumber& rn) {
	if (operator>(rn) || operator==(rn)) {
		return true;
	}
	return false;
}

bool RationalNumber::operator<=(RationalNumber& rn) {
	if (operator<(rn) || operator==(rn)) {
		return true;
	}
	return false;
}