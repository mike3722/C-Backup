#include "Util.h"
#include <string>
#include <ctime>
using std::string;
using namespace std;

vector<Card> createDeck()
{
	vector<Card> deck;
	for (int s = 1; s <= 4; s++)
	{
		string suit;
		switch (s)
		{
		case 1:
			suit = "Clubs";
			break;
		case 2:
			suit = "Diamonds";
			break;
		case 3:
			suit = "Hearts";
			break;
		case 4:
			suit = "Spades";
			break;
		}
		for (int c = 1; c <= 13; c++)
		{
			string face;
			int value = c;

			if (c == 1)
			{
				face = "A";
				value = 11;
			}
			else if (c == 11)
			{
				face = "J";
				value = 10;
			}
			else if (c == 12)
			{
				face = "Q";
				value = 10;
			}
			else if (c == 13)
			{
				face = "K";
				value = 10;
			}
			else
			{
				face = std::to_string(c);
			}
			Card card;
			card.face = face;
			card.suit = suit;
			card.value = value;
			deck.push_back(card);
		}
	}
	return deck;
}

void printHand(const vector<Card> &hand)
{
	for (Card c : hand)
	{
		std::cout << c.face << " of " << c.suit << std::endl;
	}
}

void shuffle(vector<Card> &deck)
{
	srand(time(0));
	std::random_shuffle(deck.begin(), deck.end());
}

Card deal(vector<Card> &deck) 
{
	if (deck.size() > 0) 
	{
		Card c = deck[0];
		deck.erase(deck.begin());
		return c;
	}
	throw std::domain_error("No Cards In Deck");
}