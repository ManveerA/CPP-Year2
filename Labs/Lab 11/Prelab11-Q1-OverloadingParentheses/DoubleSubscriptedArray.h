#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H

#include <iostream>

class DoubleSubscriptedArray {
public:
	class DoubleSubscriptedArray(int _rows = 0, int _columns = 0);
	int operator()(int r, int c) const;
	int& operator()(int r, int c);
	bool operator==(DoubleSubscriptedArray& arr2) const;
	bool operator!=(DoubleSubscriptedArray& arr2) const;
	void operator=(DoubleSubscriptedArray& arr2);

	friend std::ostream& operator<<(std::ostream& output, DoubleSubscriptedArray& arr2);
	friend std::istream& operator>>(std::istream& input, DoubleSubscriptedArray& arr2);

private:
	int rows;
	int columns;
	int* board;
};
#endif // !DOUBLESUBSCRIPTEDARRAY_H