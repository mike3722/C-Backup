#include "pch.h"
#include "Student.h"
#include <string>
using std::string;
//where everything is implemented


Student::Student(string name,int score,char grade)
{
	this->name = name;
	this->score = score;
	this->grade = grade;


}

string Student::getName() const 
{

	return name;
}
int Student::getScore() const 
{
	return score;
}
char Student::getGrade() const 
{
	return grade;
}

void setName(string name) 
{

}
void setScore(int score) 
{

}
void setGrade(char grade)
{

}

ostream &operator << (ostream &out, Student s) 
{
	out << s.name << " - " << s.score << " - " << s.grade << std::endl;
	return out;
}

Student::~Student()
{

}
