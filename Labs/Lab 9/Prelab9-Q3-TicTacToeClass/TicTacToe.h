#pragma once
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <array>


class TicTacToe {
public:
	TicTacToe();
	void moveP1(int x1, int y1);
	void moveP2(int x2, int y2);
	void printBoard();
	int getStatus();
	int getCounter();


private:
	std::array<std::array<int, 3>, 3>board;
	int status = 0;
	int moveCounter = 0;
};


#endif // !TICTACTOE_H

