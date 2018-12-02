#pragma once

#include <string>
#include <iostream>

using std::string;


class RomanNum
{
	string rnum;
	int value = 0;
	int convertChar(char c);

public:
	RomanNum(string s);

	void convert();
	int getValue();

	~RomanNum();
};