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