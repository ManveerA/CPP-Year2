#include <iostream>
#include <array>
#include <cstdlib>
#include <iomanip>

using namespace std;

const size_t SIZE = 8;

int main()
{
	for (int initialRow = 0; initialRow < SIZE; initialRow++) {
		for (int initialColumn = 0; initialColumn < SIZE; initialColumn++) {
			
			int currentRow = initialRow;
			int currentColumn = initialColumn;
			int moveNumber = 0;

			std::array<std::array<int, SIZE>, SIZE>board // 2D Array representing chess board
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
			std::array<std::array<int, SIZE>, SIZE>access // 2D Array representing accessibility board
			{
				2,3,4,4,4,4,3,2,
				3,4,6,6,6,6,4,3,
				4,6,8,8,8,8,6,4,
				4,6,8,8,8,8,6,4,
				4,6,8,8,8,8,6,4,
				4,6,8,8,8,8,6,4,
				3,4,6,6,6,6,4,3,
				2,3,4,4,4,4,3,2
			};
			// eight horizontal and vertical moves for the knight
			array<int, SIZE> horizontal{ 2, 1, -1, -2, -2, -1, 1, 2 };
			array<int, SIZE> vertical{ -1, -2, -2, -1, 1, 2, 2, 1 };

			bool validMove = true; 
			int counter = 2; // Counter to track journey in tour
			int bestMove = 0; // Stores best moveNumber after looping through all possible moves
			int accessNum = 10; // Initial value is greater than any access value to ensure first spot is moved to
			board[currentRow][currentColumn] = 1; // Sets initial position value to 1 as beginning of tour

			for (counter = 2; counter <= 64; counter++) {
				accessNum = 10;
				bestMove = -1; // A value of -1 will never be assigned otherwise so it shows if the tour is done
				validMove = true; // Boolean to see if move is valid
				for (moveNumber = 0; moveNumber < SIZE; moveNumber++) {
					bool validHorizontal = ((currentColumn + horizontal[moveNumber]) >= 0 && (currentColumn + horizontal[moveNumber]) < SIZE);
					bool validVertical = ((currentRow + vertical[moveNumber]) >= 0 && (currentRow + vertical[moveNumber]) < SIZE);
					if (validHorizontal && validVertical) {
						access[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]]--;
					}
				}
				for (moveNumber = 0; moveNumber < SIZE; moveNumber++) { // Cycles through all moveNumbers, beginning with moveNumber 0
					// boolean variables to check if moveNumber movement would keep position of knight within bounds of the board
					bool validHorizontal = ((currentColumn + horizontal[moveNumber]) >= 0 && (currentColumn + horizontal[moveNumber]) < SIZE);
					bool validVertical = ((currentRow + vertical[moveNumber]) >= 0 && (currentRow + vertical[moveNumber]) < SIZE);

					// If the movement of the knight based on moveNumber is valid, then check if the spot has already been visited
					if (validHorizontal && validVertical) {
						bool uniqueSpot = (board[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] == 0);

						if (uniqueSpot) { // If the spot is unique, then boolean validMove becomes true and it becomes a candidate spot
							validMove = true;
							if (access[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] <= accessNum) {
								accessNum = access[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]];
								bestMove = moveNumber;
							}
						}
						else { // Despite the movement being within the board, the knight will not visit a non-unique spot
							if (bestMove == -1) { // Means that no spots were valid and therefore the tour is over 
								validMove = false;
							}
						}
					}
					else { // The knight will not attempt to visit a spot that is off the board and therefore outside array bounds
						if (bestMove == -1) {// Means that no spots were valid and therefore the tour is over
							validMove = false;
						}
					}
				}
				if (validMove) { // only true if the movement would keep the knight on the board AND the spot has not been visited yet
					// change position of knight to new position
					currentRow += vertical[bestMove];
					currentColumn += horizontal[bestMove];
					// set value of position to be the step of the tour the spot was visited 
					board[currentRow][currentColumn] = counter;
				}
				else {
					validMove = false; // Knight is stuck and the tour is over
					break;
				}
			}
			std::cout << "--------------------------------------------------------\n\nThe initial position of the tour is [" << initialRow << "][" << initialColumn << "]" << endl;
			std::cout << "The tour ended with " << counter - 1 << " moves." << endl;
			if (counter - 1 == 64) {
				std::cout << "This was a full tour.\n" << endl; // Show it was a full tour
			}
			else {
				std::cout << "This was not a full tour.\n" << endl; // Show it was not a full tour
			}

			// Printing the board showing the path of the tour
			std::cout << setw(4);
			for (int i = 0; i <= 7; i++)
			{
				std::cout << i << setw(3);
			}

			for (int i = 0; i < 8; i++)
			{
				std::cout << "\n" << i;

				for (int j = 0; j < 8; j++)
				{
					std::cout << setw(3) << board[i][j];
				}
			}
			std::cout << "\n\n";
		}
	}
}