#include "Card.h"

Card::Card(int faceNum, int suitNum) {
	face = faceNum;
	suit = suitNum;
}

void Card::setCard(int newFace, int newSuit) {
	face = newFace;
	suit = newSuit;
}

std::string Card::toString() {
	std::string cardString = arrayFace[face] + " of " + arraySuit[suit];
	return cardString;
}