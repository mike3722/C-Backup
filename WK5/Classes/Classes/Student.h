#pragma once

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;

class Student
{
	string name;
	int score;
	char grade;

public:
	Student(string name = "DEFAULT", int score = 0, char grade = 'F');

	string getName() const;
	int getScore() const;
	char getGrade() const;
	void setName(string name);
	void setScore(int score);
	void setGrade(char grade);
	friend ostream& operator<<(ostream& out, Student s);

	~Student();
};