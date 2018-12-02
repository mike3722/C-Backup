#pragma once
#include <string>
#include <iostream>

using std::string;
class Day
{
	string days[7];
	int currentDay;
public:
	Day(int i = 0);

	void setDay(int i);
	void printDay() const;
	string getDay() const;
	string getNextDay() const;
	string getPrevDay() const;
	string getDaysFromNow(int i) const;

	~Day();
};