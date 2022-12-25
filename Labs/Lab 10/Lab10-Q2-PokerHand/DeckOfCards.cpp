#include <iostream>
#include <iomanip>
#include "Card.h"
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() {
	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			DeckOfCards::deck[k].setCard(j, i);
			k++;
		}
	}
}

Card DeckOfCards::dealCard() {
	return DeckOfCards::deck[currentCard];
}

void DeckOfCards::shuffle() {
	for (int i = 0; i < 52; i++) {
		int randomNum = 0;
		Card tempCard = deck[i];
		while (1) {
			randomNum = rand() % 52;
			if (randomNum != i) {
				deck[i] = deck[randomNum];
				deck[randomNum] = tempCard;
				break;
			}
		}
	}
}

bool DeckOfCards::moreCards() {
	return (currentCard >= 0 && currentCard < 52);
}

void DeckOfCards::printDeck() {
	while (moreCards()) {
		std::cout << std::setw(20) << std::left << deck[currentCard].toString();
		if (currentCard % 4 == 3) {
			std::cout << std::endl;
		}
		currentCard++;
	}
}

void DeckOfCards::dealHand() {
	for (int i = 0; i < 5; i++) {
		if (moreCards()) {
			hand[i] = deck[currentCard];
			currentCard++;
		}
	}
}

void DeckOfCards::printHand() {
	for (int i = 0; i < 5; i++) {
		std::cout << hand[i].toString() << std::endl;
	}
}

bool DeckOfCards::onePair() {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (hand[i].getFace() == hand[j].getFace()) {
				pairNum1 = hand[i].getFace();
				return true;
			}
		}
	}
	return false;
}

bool DeckOfCards::twoPairs() {
	if (!onePair()) {
		return false;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (hand[i].getFace() != pairNum1) {
				if (hand[i].getFace() == hand[j].getFace()) {
					pairNum2 = hand[i].getFace();
					return true;
				}
			}
		}
	}
	return false;
}

bool DeckOfCards::threeOfAKind() {
	int count = 0;
	if (!onePair()) {
		return false;
	}
	for (int i = 0; i < 5; i++) {
		if (hand[i].getFace() == pairNum1) {
			count++;
		}
		if (count == 3) {
			threeOfAKindNum = hand[i].getFace();
			return true;
		}
	}
	return false;
}

bool DeckOfCards::fourOfAKind() {
	int count = 0;
	if (!threeOfAKind()) {
		return false;
	}

	for (int i = 0; i < 5; i++) {
		if (hand[i].getFace() == threeOfAKindNum) {
			count++;
		}
		if (count == 4) {
			fourOfAKindNum = hand[i].getFace();
			return true;
		}
	}
	return false;
}

bool DeckOfCards::straight() {
	if (onePair()) {
		return false;
	}
	int smallest = hand[0].getFace();
	for (int i = 0; i < 5; i++) {
		if (smallest > hand[i].getFace()) {
			smallest = hand[i].getFace();
		}
	}
	int largest = 0;
	for (int i = 0; i < 5; i++) {
		if (largest < hand[i].getFace()) {
			largest = hand[i].getFace();
		}
	}
	if (largest - smallest == 4) {
		return true;
	}
	return false;
}

bool DeckOfCards::flush() {
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (hand[i].getSuit() == hand[i + 1].getSuit()) {
			count++;
		}
	}
	if (count == 4) {
		flushNum = hand[0].getSuit();
		return true;
	}
	return false;
}