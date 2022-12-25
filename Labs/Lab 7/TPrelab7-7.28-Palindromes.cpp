/* 7.28 (Palindromes) A palindrome is a string that’s spelled the same way forward and backward. Examples of
palindromes include “radar” and “able was i ere i saw elba.” Write a recursive function testPalindrome that
returns true if a string is a palindrome, and false otherwise. Note that like an array , the square brackets
( [] ) operator can be used to iterate through the characters in a string . */

#include <iostream>
#include <array>
#include <string>
#include <cstdlib>

using namespace std;

bool testPalindrome(std::string _s, int n) {
	
	if (_s.length() == 1) {
		return true;
	}
	else {
		if (n < _s.length() / 2) {
			return (_s[0 + n] == _s[_s.length() - 1 - n]);
			return testPalindrome(_s, n + 1);
		}
	}
}

std::string removeSpace(std::string _s) {
	std::string newString;
	for (int i = 0; i < _s.length(); i++)  {

		}
	}

int main()
{
	string s = "";
	cout << "Enter a string: ";
	cin >> s;
	if (testPalindrome(s, 0)) {
		cout<<"True";
	}
	else {
		cout<<"False";
	}
}
