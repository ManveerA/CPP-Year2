#include <iostream>
#include <cstdlib>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	DeckOfCards deck1;
	deck1.dealHand();
	deck1.printHand();

	std::cout << "Pair? " << deck1.onePair() << std::endl;
	std::cout << "Two pairs? " << deck1.twoPairs() << std::endl;
	std::cout << "Three of a kind? " << deck1.threeOfAKind() << std::endl;
	std::cout << "Four of a kind? " << deck1.fourOfAKind() << std::endl;
	std::cout << "Straight? " << deck1.straight() << std::endl;
	std::cout << "Flush? " << deck1.flush() << std::endl;
	std::cout << std::endl;

	deck1 = DeckOfCards();

	while (deck1.moreCards()) {
		deck1.shuffle();
		deck1.dealHand();
		deck1.printHand();
		std::cout << "Pair? " << deck1.onePair() << std::endl;
		std::cout << "Two pairs? " << deck1.twoPairs() << std::endl;
		std::cout << "Three of a kind? " << deck1.threeOfAKind() << std::endl;
		std::cout << "Four of a kind? " << deck1.fourOfAKind() << std::endl;
		std::cout << "Straight? " << deck1.straight() << std::endl;
		std::cout << "Flush? " << deck1.flush() << std::endl;
		std::cout << std::endl;
	}
}