#pragma once
#include <string>
#include <iostream>

using std::string;

class Clock
{
	int hr, min, sec;

public:
	Clock(int hr = 0, int min = 0, int sec = 0);

	int getHour() const;
	int getMin() const;
	int getSec() const;

	void setHour(int h);
	void setMin(int m);
	void setSec(int s);

	int getElapsedTime() const;
	int getRemainingTime() const;
	string getTimeDifference(Clock &other) const;

	~Clock();
};