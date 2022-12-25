#ifndef CARD_H
#define CARD_H
#include <array>
#include <string>

class Card {
public:
	Card(int = 0, int = 0);
	std::string toString();
	void setCard(int newSuit, int newFace);
	int getFace();
	int getSuit();

private:
	int face;
	int suit;
	std::array<std::string, 4>arraySuit = { "Clubs", "Diamonds", "Hearts","Spades" };
	std::array<std::string, 13>arrayFace = { "Ace", "Two", "Three", "Four","Five","Six",
			"Seven","Eight","Nine","Ten","Jack","Queen","King" };
};
#endif // !CARD_H