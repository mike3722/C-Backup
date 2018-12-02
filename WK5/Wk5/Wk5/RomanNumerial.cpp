#include "pch.h"
#include "RomanNumerial.h"


RomanNumerial::RomanNumerial(int num, string rnum, int convert)
{

}
int getNum()
{
	return num;
}
string getNumerial()  
{
	return rnum;
}
int setNumber(int num) 
{

}
string setNumerial(string num) 
{

}
void RomanNumerial::convert()
{

	for (int i = 0; i < rnum.size(); i++) 
	{
		int val = convertChar(rnum[i]);
		if (i < rnum.size() - 1)
		{
		int next = convertChar(rnum[i + 1]);
		if (next > val)
		{
			num += (next - val);
			i++;
		}
		else 
		{
		
			num += val;
		}
	}
}
}
RomanNumerial::~RomanNumerial()
{

}
