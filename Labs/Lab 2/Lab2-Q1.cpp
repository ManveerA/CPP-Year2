#include <iostream>

using namespace std;
/*(Largest and Smallest Integers) Write a program that reads in five integers and determines and prints the largest 
and the smallest integers in the group. 
Use only the programming techniques you learned in this chapter.*/
int main()
{
	int int1 = 0;
	int int2 = 0;
	int int3 = 0;
	int int4 = 0;
	int int5 = 0;
	int s = 0;
	int l = 0;
	cout << "Enter five integers " << endl;
	cin >> int1;
	s = int1;
	l = int1;
	cin >> int2;
	if (int2 >= int1) {
		l = int2;
	}
	if (int1 >= int2) {
		s = int2;
	}
	cin >> int3;
	if (int3 >= l) {
		l = int3;
	}
	if (s >= int3) {
		s = int3;
	}
	cin >> int4;
	if (int4 >= l) {
		l = int4;
	}
	if (s >= int4) {
		s = int4;
	}
	cin >> int5;
	if (int5 >= l) {
		l = int4;
	}
	if (s >= int5) {
		s = int5;
	}
	cout << "The smallest is " << s << endl;
	cout << "The largest is " << l << endl;
}