#include "RomanNum.h"

using std::ostream;
using std::cout;
using std::cin;
using std::endl;

RomanNum::RomanNum(string s)
{
	rnum = s;
}

int RomanNum::getValue()
{
	return value;
}

int RomanNum::convertChar(char c)
{
	switch (c)
	{
	case 'M':
	case 'm':
		return 1000;
		break;
	case 'D':
	case 'd':
		return 500;
		break;
	case 'C':
	case 'c':
		return 100;
		break;
	case 'L':
	case 'l':
		return 50;
		break;
	case 'X':
	case 'x':
		return 10;
		break;
	case 'V':
	case 'v':
		return 5;
		break;
	case 'I':
	case 'i':
		return 1;
		break;
	}
	return 0;
}

void RomanNum::convert()
{
	for (int i = 0; i < rnum.size(); i++)
	{
		int val = convertChar(rnum[i]);
		if (i < rnum.size() - 1)
		{
			int next = convertChar(rnum[i + 1]);
			if (next > val)
			{
				value += (next - val);
				i++;
			}
			else
			{
				value += val;
			}
		}
		else
		{
			value += val;
		}
	}

	cout << value << endl;
}

RomanNum::~RomanNum()
{

}

//void RomanNum::convert2()
//{
//	for (int i = 0; i < rnum.size(); i++)
//	{
//		value = convertChar(romanNum[i]);
//	}
//	cout << num << endl;
//}