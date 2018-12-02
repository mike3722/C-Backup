#include "pch.h"
#include "Days.h"
using namespace std;

Days::Days()
{
	days[0] = "Sun";
	days[1] = "Mon";
	days[2] = "Tues";
	days[3] = "Wed";
	days[4] = "Thur";
	days[5] = "Fri";
	days[6] = "Sat";
	currday = i;
}

void Days::setDay(int i)
{

	currday = 1;
}

string Days::getDay() 
{

}

Days::~Days()
{

}
