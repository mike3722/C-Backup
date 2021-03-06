#include <iostream>
#include <vector>
#include <fstream>
#include <list>
#include <algorithm>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::list;

void question1()
{
	vector<unsigned int> nums;
	ifstream in("C:\\users\\floodd\\Desktop\\TestFiles\\nums.txt");
	if (in)
	{
		unsigned int num;
		while (!in.eof())
		{
			in >> num;
			nums.push_back(num);
		}
		int choice = 0;
		do
		{
			cout << "Please enter a number to find, -1 to exit: ";
			cin >> choice;
			if (choice != -1)
			{
				bool found = false;
				for (vector<unsigned int>::size_type i = 0;
					i < nums.size(); i++)
				{
					if (nums[i] == choice)
					{
						cout << "Found at position " << i << endl;
						found = true;
						break;
					}
				}
				if (!found)
				{
					cout << "Value not found." << endl;
				}
			}
		} while (choice != -1);
	}
	else
	{
		cout << "File not found." << endl;
	}
}

void question2()
{
	list<unsigned int> nums;
	ifstream in("C:\\users\\floodd\\Desktop\\TestFiles\\nums.txt");
	if (in)
	{
		unsigned int num;
		while (!in.eof())
		{
			in >> num;
			nums.push_back(num);
		}
		int choice = 0;
		do
		{
			cout << "Please enter a number to find, -1 to exit: ";
			cin >> choice;
			if (choice != -1)
			{
				bool found = false;
				list<unsigned int>::size_type i = 0;
				for (list<unsigned int>::iterator 
					iter = nums.begin();
					iter != nums.end(); iter++)
				{
					if (*iter == choice)
					{
						cout << "Found at position " << i << endl;
						found = true;
						break;
					}
					i++;
				}
				if (!found)
				{
					cout << "Value not found." << endl;
				}
			}
		} while (choice != -1);
	}
	else
	{
		cout << "File not found." << endl;
	}
}

bool greater(unsigned int a, unsigned int b)
{
	return a > b;
}
//std::sort(nums.begin(), nums.end(), greater);
void question3()
{
	vector<unsigned int> nums;
	ifstream in("C:\\users\\floodd\\Desktop\\TestFiles\\nums.txt");
	if (in)
	{
		unsigned int num;
		while (!in.eof())
		{
			in >> num;
			nums.push_back(num);
		}
		std::sort(nums.begin(), nums.end(), greater);
		for (vector<unsigned int>::size_type i = 0;
					i < nums.size(); i++)
		{
			if (i != 0)
			{
				cout << ", ";
			}
			cout << nums[i];
				
		}
		
	}
	else
	{
		cout << "File not found." << endl;
	}
}

double getMedian(vector<int> nums)
{
	std::sort(nums.begin(), nums.end());
	vector<int>::size_type mid = nums.size() / 2;
	if (nums.size() % 2 == 1)
	{
		return nums[mid];
	}
	else
	{
		return (nums[mid - 1] + nums[mid]) / 2.0f;
	}

}

void question5()
{
	vector<int> nums;
	ifstream in("C:\\users\\floodd\\Desktop\\TestFiles\\nums.txt");
	if (in)
	{
		int num;
		while (!in.eof())
		{
			in >> num;
			nums.push_back(num);
		}
		double median = getMedian(nums);
		cout << "Median = " << median << endl;
		for (vector<unsigned int>::size_type i = 0;
			i < nums.size(); i++)
		{
			if (i != 0)
			{
				cout << ", ";
			}
			cout << nums[i];

		}
	}
	else
	{
		cout << "Error reading file" << endl;
	}
}

void print(const string label, const vector<int> &nums)
{
	cout << label;
	for (vector<int>::size_type i = 0; i < nums.size(); i++)
	{
		if (i != 0)
		{
			cout << ", ";
		}
		cout << nums[i];
	}
	cout << endl;
}

void question6()
{
	vector<int> nums;
	ifstream in("C:\\users\\floodd\\Desktop\\TestFiles\\nums.txt");
	if (in)
	{
		int num;
		while (!in.eof())
		{
			in >> num;
			nums.push_back(num);
		}
		double median = getMedian(nums);
		cout << "Median = " << median << endl;
		vector<int> above;
		vector<int> below;

		for (vector<unsigned int>::size_type i = 0;
			i < nums.size(); i++)
		{
			if (nums[i] > median)
			{
				above.push_back(nums[i]);
			}
			else
			{
				below.push_back(nums[i]);
			}

		}
		print("Above: ", above);
		print("below: ", below);

	}
	else
	{
		cout << "Error reading file" << endl;
	}
}
int main()
{
	question6();
}
