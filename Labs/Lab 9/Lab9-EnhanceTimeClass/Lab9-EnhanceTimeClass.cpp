#include <iostream>
#include "Time.h"

using namespace std;
int numOfTicks = 100;
int main()
{
	Time t;
	t.setTime(23, 58, 40);
	for (int ticks = 1; ticks < numOfTicks; ++ticks) {
		t.printStandard();
		cout << endl;
		t.tick();
	}
}