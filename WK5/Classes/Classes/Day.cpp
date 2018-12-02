#include "Day.h"

Day::Day(int i)
{
	days[0] = "Mon";
	days[1] = "Tues";
	days[2] = "Wed";
	days[3] = "Thur";
	days[4] = "Fri";
	days[5] = "Sat";
	days[6] = "Sun";
	currentDay = i;
}

void Day::setDay(int i)
{
	currentDay = i;
}
void Day::printDay() const
{
	std::cout << days[currentDay] << std::endl;
}
string Day::getDay() const
{
	return days[currentDay];
}
string Day::getNextDay() const
{
	return days[(currentDay + 1) % 7];
}
string Day::getPrevDay() const
{
	int day = ((7 + currentDay - 1) % 7);
	return days[day];
}
string Day::getDaysFromNow(int i) const
{
	int day = ((currentDay + i) % 7);
	return days[day];
}

Day::~Day()
{

}