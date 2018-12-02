#pragma once
#include <string>
using std::string;
class RomanNumerial
{
	int num;
	string rnum;
	int convertChar(char c);
public:
	RomanNumerial();
	int getNum() const;
	string getNumerial() const;
	int setNumber(int num);
	string setNumerial(string num);
	void convert();
	~RomanNumerial();


};

