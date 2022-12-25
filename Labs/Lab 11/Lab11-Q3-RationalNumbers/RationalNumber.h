#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include <string>


class RationalNumber {
public:
	RationalNumber(int = 1, int = 1);
	std::string toString();
	RationalNumber operator+(RationalNumber& rn);
	RationalNumber operator-(RationalNumber& rn);
	RationalNumber operator*(RationalNumber& rn);
	RationalNumber operator/(RationalNumber& rn);
	bool operator ==(RationalNumber& rn);
	bool operator !=(RationalNumber& rn);
	bool operator <(RationalNumber& rn);
	bool operator >(RationalNumber& rn);
	bool operator <=(RationalNumber& rn);
	bool operator >=(RationalNumber& rn);
	void reduce();

private:
	int numerator;
	int denominator;
};

#endif // !RATIONALNUMBER_H

