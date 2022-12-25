/* Write a program to read a sentence of unknown length and save it in a string. The program has to call a recursive 
function to reiterate through the characters in the string and determine if the sentence is a palindrome (reads the 
same backward as forward). Test your program with "step on no pets". */


#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(const vector<char> _a, int a, int b){ // Recursive function with parameters of vector, and ints
	
	if (a==_a.size()){ // 1-character string is a palindrome
		return true;
		}
	if (_a[a] != _a[b]) { // False if any character paired character is not equal to the other
		return false;
	}
	if (a < b + 1) {
			return isPalindrome(_a, a + 1, b - 1);//Moves on to next set of characters inwards toward center of vector
		}
	return true;
	}
bool isPalindrome1(const vector<char> _a) { //boolean palindrome function; works by returning recursive result
	int i = _a.size();
	if (i == 0) {
		return true;
	}
	return isPalindrome(_a, 0, i-1);
}

int main()
{
	string string1 = "";
	cout << "Enter a string: ";
	cin >> string1;
	vector<char> a(string1.begin(), string1.end());
	cout << a.size();
	if (isPalindrome1(a)) { // There is an issue. The program works with steponnopets not but step on no pets
							// I don't know how to fix the issue with it not being able to work with spaces.
		cout << "true";
	}
	else {
		cout << "false";
	}
}