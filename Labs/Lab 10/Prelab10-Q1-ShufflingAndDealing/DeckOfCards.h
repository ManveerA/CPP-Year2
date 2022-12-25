#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include <array>
#include "Card.h"

class DeckOfCards {
public:
	DeckOfCards();
	void shuffle();
	Card dealCard();
	bool moreCards();
	void printDeck();

private:
	std::array<Card, 52>deck{};
	int currentCard = 0;
};
#endif // !DECKOFCARDS_H