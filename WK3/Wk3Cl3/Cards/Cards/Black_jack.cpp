#include <iostream>
#include "Util.h"
#include <fstream>

using namespace std;

int calScore(vector<Card> hand) 

{
	int numAces = 0;
	int score = 0;
	for (Card c : hand) 
	{
		score += c.value;
		if (c.face == "A")
		{
			numAces++;
		}
	}
	while (numAces > 0 && score > 21) 
	{
		numAces--;
		score -= 10;

	}
	return score;

}

int main()
{
	string str = "Derek Black-Jack";
	string top(str.length() + 4, '*');
	cout << top << endl;
	cout << "* " << str << " *" << endl;
	cout << top << endl;

	vector<Card> deck = createDeck();
	shuffle(deck);
	vector<Card> player;
	vector<Card> dealer;

	for (int i = 0; i < 2; i++)
	{
		player.push_back(deal(deck));
		dealer.push_back(deal(deck));
	}
	//printHand(player);
	char hit;
	int playerScore = calScore(player);
	do 
	{
		printHand(player);
		cout << "Your Score: " << playerScore << endl;
		cout << "Hit (y/n)?: " << endl;
		cin >> hit;
		if (hit == 'Y' || hit == 'y') 
		{
			player.push_back(deal(deck));
			playerScore = calScore(player);
		}

	} while (hit == 'y' || hit == 'y' && playerScore < 21);
	
	while (calScore(dealer) < 17) 
	{
		dealer.push_back(deal(deck));
	}
	int dealerScore = calScore(dealer);
	cout << "Dealer = " << dealerScore << endl;
	if (dealerScore > 21 || (playerScore > dealerScore)<22) 
	{
		cout << "You Win" << endl;
	}
	else 
	{
		cout << "You Lose" << endl;
	}

}