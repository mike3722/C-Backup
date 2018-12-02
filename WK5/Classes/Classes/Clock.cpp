#include "Clock.h"

Clock::Clock(int h, int m, int s)
{
	hr = h;
	min = m;
	sec = s;
}
int Clock::getHour() const
{
	return hr;
}
int Clock::getMin() const
{
	return min;
}
int Clock::getSec() const
{
	return sec;
}
void Clock::setHour(int h)
{
	hr = h;
}
void Clock::setMin(int m)
{
	min = m;
}
void Clock::setSec(int s)
{
	sec = s;
}

int Clock::getElapsedTime() const
{
	return (hr * 3600) + (min * 60) + sec;
}

int Clock::getRemainingTime() const
{
	return 86400 - getElapsedTime();
}

string Clock::getTimeDifference(Clock &other) const
{
	int h = hr - other.hr;
	int m = min - other.min;
	int s = sec - other.sec;

	if (h >= 0)
	{
		if (m < 0)
		{
			h--;
			m += 60;
		}
		if (s < 0)
		{
			m--;
			s += 60;
		}
	}
	else
	{
		if (m > 0)
		{
			h++;
			m -= 60;
		}
		if (s > 0)
		{
			m++;
			s -= 60;
		}

		h = abs(h);
		m = abs(m);
		s = abs(s);
	}
	
	std::cout << h << ":";
	std::cout << m << ":";
	std::cout << s << std::endl;

	return "" + h + ':' + m + ':' + s;
}
Clock::~Clock()
{

}