/* Q6- (Print a String Backward) Write a recursive function stringReverse that takes a string and a 
starting subscript as arguments, prints the string backward and returns nothing. The function should 
stop processing and return when the end of the string is encountered. Note that like an array the 
square brackets ([]) operator can be used to iterate through the characters in a string. */


#include <iostream>
#include <array>
#include <string>

using namespace std;

void stringReverse(std::string s, int n) {
	if (n == s.length()) {
		cout << s[0];
		return;
	}
	else {
		cout << s[s.length()-n];
		stringReverse(s, n + 1);
		return;
	}
}

int main()
{
	string s = "";

	cout << "Enter a string: ";
	cin >> s;
	stringReverse(s, 1);
}