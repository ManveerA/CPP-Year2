#include <iostream>
#include <array>
#include <cstdlib>
#include <iomanip>

using namespace std;

const size_t SIZE = 8;

int main()
{
	// Initial position of the knight is 0,0.
	int currentRow = 5;
	int currentColumn = 4;
	int moveNumber = 0;

	std::array<std::array<int, SIZE>, SIZE>board
	{
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0
	};

	// eight horizontal and vertical moves for the knight
	array<int, SIZE> horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
	array<int, SIZE> vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };
	board[currentRow][currentColumn] = i; // Sets initial position value to 1 as beginning of tour
	bool validMove = true;

	for (int i = 1; i <= 65; i++) {
	
			for (moveNumber = 0; moveNumber < SIZE; moveNumber++) { // Cycles through all moveNumbers, beginning with moveNumber 0
				// boolean variables to check if moveNumber movement would keep position of knight within bounds of the board
				bool validHorizontal = ((currentColumn + horizontal[moveNumber]) >= 0 && (currentColumn + horizontal[moveNumber]) < SIZE);
				bool validVertical = ((currentRow + vertical[moveNumber]) >= 0 && (currentRow + vertical[moveNumber]) < SIZE);

				// If the movement of the knight based on moveNumber is valid, then check if the spot has already been visited
				if (validHorizontal && validVertical) {
					bool uniqueSpot = (board[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] == 0);
					if (uniqueSpot) { // If the spot is unique, then boolean validMove becomes true and the knight will visit it
						validMove = true;
						break; // Breaks out of loop cycling through moveNumbers from 0 to 7
					}
					else { // Despite the movement being within the board, the knight will not visit a non-unique spot
						validMove = false;
					}
				}
				else { // The knight will not attempt to visit a spot that is off the board and therefore outside array bounds
					validMove = false;
				}
			}
			if (validMove) { // only true if the movement would keep the knight on the board AND the spot has not been visited yet
				// change position of knight to new position
				currentRow += vertical[moveNumber];
				currentColumn += horizontal[moveNumber];
				// set value of position to be the step of the tour the spot was visited 
				board[currentRow][currentColumn] = i;
			}
			else {
				// if validMove is false, then the knight is at a spot that it cannot move from without revisiting another spot.
				// the tour ends regardless of whether or not all spots were visited exactly once
				cout << "The tour ended with " << i - 1 << " moves." << endl;
				if (i - 1 < 64) {
					cout << "\nThis was not a full tour.\n" << endl;
				}
				break;
			}
	}
	// Printing the board showing the path of the tour
	cout << setw(4);
	for (int i = 0; i <= 7; i++)
	{
		cout << i << setw(3);
	}

	for (int i = 0; i < 8; i++)
	{
		cout << "\n" << i;

		for (int j = 0; j < 8; j++)
		{
			cout << setw(3) << board[i][j];
		}
	}
}
