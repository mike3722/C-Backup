#pragma once
#include "pch.h"
#include <iostream>
#include <string>
/*
using namespace std;

class Game
{

	char board[3][3];
	char currPlayer;
public:
	Game();
	int checkWin();
	bool isUsed(int v,int y);
	bool makeMove(int v, int y);
	friend ostream &operator(ostream& out,Game game);
};