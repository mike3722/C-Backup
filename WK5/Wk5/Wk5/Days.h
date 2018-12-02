#pragma once
#include <string>
using std::string;
class Days
{
	string days[7];
	string currday;

public:
	Days();
	string getDay() const;
	void setDay(int i);
	void printDay() const;
	string getNextDay() const;
	string getPrevDay() const;
	string getDayFN() const;

	~Days();
};

