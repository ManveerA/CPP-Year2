/* 5-(De Morgan’s Laws) In this chapter, we discussed the logical operators &&, || and !. De Morgan’s laws can
sometimes make it more convenient for us to express a logical expression. These laws state that the expression
!( condition1 && condition2 ) is logically equivalent to the expression ( !condition1 || !condition2 ). Also, the
expression !( condition1 || condition2 ) is logically equivalent to the expression ( !condition1 && !condition2 ).
Use De Morgan’s laws to write equivalent expressions for each of the following, then write a program to show that
the original expression and the new expression in each case are equivalent.

Conditions

A. !(x < 5) && !(y >= 7)
B. !(a == b) || !(g != 5)
C. !((x <= 8) && (y > 4))
D. !((i > 4) || (j <= 6)) */

#include <iostream>

using namespace std;

int main()
{

	int x = 1;
	int y = 10;

	if (!(x < 5 && y >= 7)) {
		cout << "a) is true." << endl;
	}
	else {
		cout << "a) is false." << endl;
	}

	if (!(x < 5) || !(y >= 7)) {
		cout << "From new De Morgan expression a) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression a) is false" << endl;
	}
	
	x = 10;
	y = 0;

	if (!(x < 5 && y >= 7)) {
		cout << "a) is true." << endl;
	}
	else {
		cout << "a) is false." << endl;
	}

	if (!(x < 5) || !(y >= 7)) {
		cout << "From new De Morgan expression a) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression a) is false" << endl;
	}

	int a = 1;
	int b = 1;
	int g = 1;

	if (!(a == b) || !(g != 5)) {
		cout << "b) is true." << endl;
	}
	else {
		cout << "b) is false." << endl;
	}
	if (!(a == b && g != 5)) {
		cout << "From new De Morgan expression b) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression b) is false" << endl;
	}
	a = 1; 
	b = 2;
	g = 4;

	if (!(a == b) || !(g != 5)) {
		cout << "b) is true." << endl;
	}
	else {
		cout << "b) is false." << endl;
	}
	if (!(a == b && g != 5)) {
		cout << "From new De Morgan expression b) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression b) is false" << endl;
	}

	x = 5;
	y = 5;

	if (!(x <= 8 && y > 4)) {
		cout << "c) is true." << endl;
	}
	else {
		cout << "c) is false." << endl;
	}
	if (!(x <= 8) || !(y > 4)) {
		cout << "From new De Morgan expression c) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression c) is false" << endl;
	}

	x = 9;
	y = 1;

	if (!(x <= 8 && y > 4)) {
		cout << "c) is true." << endl;
	}
	else {
		cout << "c) is false." << endl;
	}
	if (!(x <= 8) || !(y > 4)) {
		cout << "From new De Morgan expression c) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression c) is false" << endl;
	}

	int i = 5;
	int j = 6;

	if (!(i > 4 || j <= 6)) {
		cout << "d) is true." << endl;
	}
	else {
		cout << "d) is false." << endl;
	}

	if (!(i > 4) && !(j <= 6)) {
		cout << "From new De Morgan expression d) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression d) is false" << endl;
	}

	i = 1;
	j = 7;

	if (!(i > 4 || j <= 6)) {
		cout << "d) is true." << endl;
	}
	else {
		cout << "d) is false." << endl;
	}

	if (!(i > 4) && !(j <= 6)) {
		cout << "From new De Morgan expression d) is true." << endl;
	}
	else {
		cout << "From new De Morgan expression d) is false" << endl;
	}

}
