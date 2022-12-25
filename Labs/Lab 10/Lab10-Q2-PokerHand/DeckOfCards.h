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
	void dealHand();
	void printHand();
	bool onePair();
	bool twoPairs();
	bool threeOfAKind();
	bool fourOfAKind();
	bool flush();
	bool straight();

private:
	std::array<Card, 52>deck{};
	std::array<Card, 5>hand{};
	int pairNum1 = 0;
	int pairNum2 = 0;
	int threeOfAKindNum = 0;
	int fourOfAKindNum = 0;
	int flushNum = 0;
	int currentCard = 0;
};
#endif // !DECKOFCARDS_H