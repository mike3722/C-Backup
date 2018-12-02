#pragma once
#include <string>
//where the class is defined
using std::string;
using std::ostream;
class Student
{
	string name;
	int score;
	char grade;


public:
	Student(string name = "Defualt", int score = 0, char grade = 'F');
	string getName() const;
	int getScore() const;
	char getGrade() const;
	void setName(string name);
	void setScore(int score);
	void setGrade(char grade);
	friend ostream &operator << (ostream &out, Student s);
	~Student();



};

