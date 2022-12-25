#include <iostream>
#include <cstdlib>

using namespace std;

void moveHare(int* positionHPtr, int i);
void moveTortoise(int* positionTPtr, int i);
void printSpaces(int* tempPtr);

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int positionH = 1;
	int positionT = 1;
	int randomInt1 = 0;
	int randomInt2 = 0;

	std::cout << "H\nT\n" << std::endl; //Print H and T initial starting positions
	std::cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n" << std::endl;

	while (1) {
		randomInt1 = rand() % 10 + 1;
		randomInt2 = rand() % 10 + 1;

		moveHare(&positionH, randomInt1); // Change position of H
		moveTortoise(&positionT, randomInt2); // Change position of T

		// Printing current positions
		printSpaces(&positionH);
		std::cout << "H" << std::endl;
		printSpaces(&positionT);
		std::cout << "T";

		// Display message if positions are equal
		if (positionH == positionT) {
			std::cout << " (OUCH!!!)";
		}

		std::cout << "\n----------------------------------------------------------------------" << std::endl;

		// Check if H, T, or both have reached the finish line
		if (positionH == 70 && positionT != 70) {
			std::cout << "\n\nHare wins. Cringe." << std::endl;
			break;
		}
		else if (positionT == 70 && positionH != 70) {
			std::cout << "\n\nTORTOISE WINS!!! POG!!!" << std::endl;
			break;
		}
		else if (positionH == 70 && positionT == 70) {
			std::cout << "\n\nIt's a tie." << std::endl;
			break;
		}
	}
}

void moveHare(int* positionHPtr, int i) {
	// 20% chance to do nothing
	if (i <= 2) {
	}
	// 20% chance to move 9 to the right
	else if (i >= 3 && i <= 4) {
		*positionHPtr += 9;
	}
	// 10% chance to move 12 to the left
	else if (i == 5) {
		if (*positionHPtr <= 12) {
			*positionHPtr = 1;
		}
		else {
			*positionHPtr -= 12;
		}
	}
	// 30% chance to move 1 to the right
	else if (i >= 6 && i <= 8) {
		*positionHPtr += 1;
	}
	// 20% chance to move 2 to the left
	else {
		if (*positionHPtr <= 2) {
			*positionHPtr = 1;
		}
		else {
			*positionHPtr -= 2;
		}
	}
	if (*positionHPtr > 70) {
		*positionHPtr = 70;
	}
}

void moveTortoise(int* positionTPtr, int i) {
	// 50% chance to move 3 to the right
	if (i <= 5) {
		*positionTPtr += 3;
	}
	// 20% chance to move 6 to the left
	else if (i >= 6 && i <= 7) {
		if (*positionTPtr <= 6) {
			*positionTPtr = 1;
		}
		else {
			*positionTPtr -= 6;
		}
	}
	// 30% chance to move 1 to the right
	else {
		*positionTPtr += 1;
	}
	if (*positionTPtr > 70) {
		*positionTPtr = 70;
	}
}

void printSpaces(int* tempPtr) {
	for (int counter = 1; counter < *tempPtr; counter++) {
		std::cout << " ";
	}
}