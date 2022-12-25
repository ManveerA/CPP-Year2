#include <iostream>
#include <cstdlib>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	DeckOfCards deck1;

	std::cout << "Dealing the deck...\n" << std::endl;
	deck1.printDeck();
	if (!deck1.moreCards()) {
		std::cout << "\nThe deck is now empty and all of the cards have been dealt." << std::endl;
	}

	std::cout << "\nResetting the deck...\n" << std::endl;
	deck1 = DeckOfCards::DeckOfCards();

	std::cout << "Shuffling the deck...\n" << std::endl;
	deck1.shuffle();

	std::cout << "Dealing the deck after a shuffle...\n" << std::endl;
	deck1.printDeck();
	if (!deck1.moreCards()) {
		std::cout << "\nThe deck is now empty and all of the cards have been dealt." << std::endl;
	}
}