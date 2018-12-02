#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

struct Card
{
	string face;
	string suit;
	int value;

};

vector<Card> createDeck();
void printHand(const vector<Card> &hand);
void shuffle(vector<Card> &deck);
Card deal(vector<Card> &deck);
