// C++Wk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
using std::ofstream;
using std::ifstream;

void readFile();
void readNums();
void readGrades();
void calSquares();
double calGrade(int exam, int ca)
{
	double totalgrade = (exam*0.6) + (ca*0.4);
	return totalgrade;

}
int main()
{
	//writeFile();
	
	//readFile();

	//readNums();

	readGrades();
	

}
void writeFile() 
{

	string name;
	std::cout << "Please Enter your Name :";
	getline(cin, name);

	ofstream out("C:\\Users\\D00167295\\Desktop\\C++WK2\\test.txt");

	if (out)
	{
		out << name << endl;
		out.close();
	}
	else
	{
		cout << "Error cannot file deos not Exist" << endl;

	}
}

void readFile() 
{
	string data;

/*	infile.open("C:\\Users\\D00167295\\Desktop\\C++WK2\\test.txt");

	while (!infile) // To get you all the lines.
	{
		getline(infile, data); // Saves the line in STRING.
		cout << data; // Prints our STRING.
	}
	infile.close();*/

	//MAKE SURE YOU USE SINGLE QOUTES FOR STRINGS E.G ' NOT "


	ifstream in("C:\\Users\\D00167295\\Desktop\\C++WK2\\test.txt");
	getline(in, data);
	string::size_type len = data.length();
	cout << string(len + 4, '*') << endl;
	cout << "* " << data << " *" << endl;
	cout << string(len + 4, '*') << endl;


}

void readNums() 
{
	int num, total=0, count=0;

	ifstream in("C:\\Users\\D00167295\\Desktop\\C++WK2\\q3.txt");
	
	while (!in.eof()) 
	{
		in >> num;
		total += num;
		count++;
	}

	double avg = (float)total / (float)count;
	cout << "Average = " << avg << endl;

}

void readGrades() 
{
	string name;
	int exam, ca;

	cout << "Name: ";
		getline(cin, name);
	cout << "Exam Results: ";
	cin>>exam;
	cout << "CA results: ";
	cin >> ca;

	//double totagrade = (exam*0.6) + (ca*0.4);

	

	//cout << name+" "<<"Total Grade = "<< totagrade;

	ofstream out("C:\\Users\\D00167295\\Desktop\\C++WK2\\results.txt");
	if (out)
	{
		out << name + " " << "Total Grade = " << calGrade(exam, ca);
		out.close();
	}
	else
	{
		cout << "Error cannot file deos not Exist" << endl;

	}



}

void calSquares() 
{
	

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
