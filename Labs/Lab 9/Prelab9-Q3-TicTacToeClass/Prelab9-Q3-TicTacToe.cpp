#include <iostream>
#include <array>
#include <iomanip>
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
	:board ({}), status(0), moveCounter(0)
{} // end constructor

void TicTacToe::moveP1(int row1, int col1) {
	row1 -= 1;
	col1 -= 1;
	board[row1][col1] = 1;
	moveCounter++;

	// check row
	for (int i = 0; i < 3; i++) {
		if (board[row1][i] != 1)
			break;
		if (i == 2) {
			status = 1;
			// Player 1 has won
		}
	}
	
	// check column
	for (int i = 0; i < 3; i++) {
		if (board[i][col1] != 1)
			break;
		if (i == 2) {
			status = 1;
		}
	}
	
	// check diagonal
	if (row1 == col1) {
		for (int i = 0; i < 3; i++) {
			if (board[i][i] != 1)
				break;
			if (i == 2) {
				status = 1;
			}
		}
	}

	// check other diagonal
	if (row1 + col1 == 2) {
		for (int i = 0; i < 3; i++) {
			if (board[i][2 - i] != 1)
				break;
			if (i == 2) {
				status = 1;
			}
		}
	}
}

void TicTacToe::moveP2(int row2, int col2) {
	row2 -= 1;
	col2 -= 1;
	board[row2][col2] = 2;
	moveCounter++;

	// check row
	for (int i = 0; i < 3; i++) {
		if (board[row2][i] != 2)
			break;
		if (i == 2) {
			status = 2;
			// Player 2 has won
		}
	}

	// check column
	for (int i = 0; i < 3; i++) {
		if (board[i][col2] != 2)
			break;
		if (i == 2) {
			status = 2;
		}
	}

	// check diagonal
	if (row2 == col2) {
		for (int i = 0; i < 3; i++) {
			if (board[i][i] != 2)
				break;
			if (i == 2) {
				status = 2;
			}
		}
	}

	// check other diagonal
	if (row2 + col2 == 2) {
		for (int i = 0; i < 3; i++) {
			if (board[i][2 - i] != 2)
				break;
			if (i == 2) {
				status = 2;
			}
		}
	}

}

void TicTacToe::printBoard() {
	// Printing the board showing the path of the tour
	std::cout << setw(4);
	for (int i = 1; i <= 3; i++)
	{
		std::cout << i << setw(3);
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n" << i + 1;

		for (int j = 0; j < 3; j++)
		{
			std::cout << setw(3) << board[i][j];
		}
	}
}

int TicTacToe::getStatus() {
	return status;
}

int TicTacToe::getCounter() {
	return moveCounter;
}

int main()
{
	int xInput = 0;
	int yInput = 0;
	TicTacToe object;
	
	std::cout << "---TicTacToe---" << std::endl;
	std::cout << "Use the coordinate system shown to select a spot. Do not make an invalid input or overwrite an occupied position.\nThe game will now begin." << std::endl;
	
	while (1) {
		
		object.printBoard();

		// take Player 1 input and change board
		std::cout << "\n\nPLAYER 1 - MAKE YOUR MOVE\nROW: ";
		std::cin >> xInput;
		std::cout << "COLUMN: ";
		std::cin >> yInput;
		object.moveP1(xInput, yInput);

		object.printBoard();

		if (object.getStatus() == 1) {
			std::cout << "\n\nPLAYER 1 WINS" << std::endl;
			break;
		}
		if (object.getCounter() == 9) {
			std::cout << "\n\nDRAW" << std::endl;
			break;
		}

		// take Player 2 input and change board
		std::cout << "\n\nPLAYER 2 - MAKE YOUR MOVE\nROW: ";
		std::cin >> xInput;
		std::cout << "COLUMN: ";
		std::cin >> yInput;
		object.moveP2(xInput, yInput);

		if (object.getStatus() == 2) {
			std::cout << "\n\nPLAYER 2 WINS" << std::endl;
			break;
		}
		if (object.getCounter() == 9) {
			std::cout << "\n\nDRAW" << std::endl;
			break;
		}
	}
}
