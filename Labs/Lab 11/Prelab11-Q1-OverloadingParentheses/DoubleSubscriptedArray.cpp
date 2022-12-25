#include <iostream>
#include <iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int _rows, int _columns) {
	rows = _rows;
	columns = _columns;
	board = new int[rows * columns];
	int l = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			board[i * columns + j] = l;
			l++;
		}
	}
}

int DoubleSubscriptedArray::operator()(int r, int c) const {
	int element = board[r * columns + c];
	return element;
}

int& DoubleSubscriptedArray::operator()(int r, int c) {
	int& elementLoc = board[r * columns + c];
	return elementLoc;
}

std::ostream& operator<<(std::ostream& output, DoubleSubscriptedArray& arr) {
	for (int i = 0; i < arr.rows; i++)
	{
		for (int j = 0; j < arr.columns; j++)
		{
			output << setw(3) << arr.board[i * arr.columns + j];
		}
		output << setw(4) << std::endl;
	}
	output << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, DoubleSubscriptedArray& arr) {
	std::cout << "Rows: ";
	input >> arr.rows;
	std::cout << "Columns: ";
	input >> arr.columns;
	std::cout << "Enter each element, starting from the first row and column,"
		<< " moving left to right and then down." << std::endl;
	int inputV = 0;
	for (int i = 0; i < arr.rows; i++)
	{
		for (int j = 0; j < arr.columns; j++)
		{
			input >> inputV;
			arr.board[i * arr.columns + j] = inputV;
		}
	}
	return input;
}

void DoubleSubscriptedArray::operator=(DoubleSubscriptedArray& arr2) {
	rows = arr2.rows;
	columns = arr2.columns;
	board = new int[rows * columns];

	for (int i = 0; i < rows * columns; i++) {
		board[i] = arr2.board[i];
	}
}

bool DoubleSubscriptedArray::operator==(DoubleSubscriptedArray& arr2) const {
	if (rows != arr2.rows || columns != arr2.columns) {
		return false;
	}
	for (int i = 0; i < rows * columns; i++) {
		if (board[i] != arr2.board[i]) {
			return false;
		}
	}
	return true;
}

bool DoubleSubscriptedArray::operator!=(DoubleSubscriptedArray& arr2) const {
	return !operator==(arr2);
}