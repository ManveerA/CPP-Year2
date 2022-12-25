#include <iostream>

using namespace std;

int main()
{
	cout << "Integer\t" << "Square\t" << "Cube" << endl;
	for (int i = 0; i <= 10; i++)
	{
		cout << i << '\t' << i * i << '\t' << i * i * i << endl;
	}
}