#include <iostream>
#include "Util.h"
#include <fstream>

using namespace std;

int main1()
{
	vector<Card> deck = createDeck();
	shuffle(deck);
	
	char choice = 0;
	do 
	{
		Card c1 = deal(deck);
		cout << "1.Guess Suit " << endl;
		cout << "2.Guess Face Value" << endl;
		cout << "3.Guess Suit & Face Value " << endl;
		int choice1;
		int suit;
		string Facevalue;
		bool won = false;
		cin >> choice1;
		switch (choice1 ) 
		{
			
		case 1:
			cout << "Guess Suit: 1.Diamonds, " << "2.Clubs, " << "3.Hearts or 4.Spades" << endl;
			cin >> suit;
			if (suit == 1) 
			{
				if (c1.suit == "Diamonds") 
				{
					won = true;
				}
			}
			if (suit == 2)
			{
				if (c1.suit == "Clubs")
				{
					won = true;
				}
			}if (suit == 3)
			{
				if (c1.suit == "Hearts")
				{
					won = true;
				}
			}if (suit == 4)
			{
				if (c1.suit == "Spades")
				{
					won = true;
				}
			}
			if (won == true) 
			{
				cout << "You Have Won!!" << endl;
			}
			else 
			{

				cout <<"Wrong it Was "  <<"You Lose Try Again" << endl;
			}
			break;
			


		case 2:
			cout << "Guess the Face Value : " << endl;
			cin >> Facevalue;
			if (Facevalue == c1.face)
			{
				cout << "You Have Won!!" << endl;
			}
			else
			{
				cout << "You Lose Try Again" << endl;
			}
			break;
		case 3:
			cout << "Guess Suit: 1.Diamonds, " << "2.Clubs, " << "3.Hearts or 4.Spades" << endl;
			cin >> suit;
			if (suit == 1)
			{
				if (c1.suit == "Diamonds")
				{
					won = true;
				}
			}
			if (suit == 2)
			{
				if (c1.suit == "Clubs")
				{
					won = true;
				}
			}if (suit == 3)
			{
				if (c1.suit == "Hearts")
				{
					won = true;
				}
			}if (suit == 4)
			{
				if (c1.suit == "Spades")
				{
					won = true;
				}
			}
			if (won == true)
			{
				cout << "You Have Won!!" << endl;
				cout << "Now Guess the Face Value : " << endl;
				cin >> Facevalue;
				if (Facevalue == c1.face)
				{
					cout << "You Have Won!!" << endl;
				}
				else
				{
					cout << "You Lose Try Again" << endl;
				}
			}
			else
			{
				cout << "You Lose Try Again" << endl;
			}

		
		
			break;
		}
		cout << "Play Again (y/n)" << endl;
		cin >> choice;

	} 
	while (choice == 'y' || choice != 'y');
	//cout << c1.face << " of " << c1.face << endl;

	printHand(deck);
	return 0;
}
vector<Card> createDeck();
void printHand(const vector<Card> &hand);
void shuffle(vector<Card> &deck);
Card deal(vector<Card> &deck);