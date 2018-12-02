#include "Student.h"


Student::Student(string name, int score, char grade)
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
void Student::setName(string n)
{
	name = name;
}
void Student::setScore(int s)
{
	score = s;
}
void Student::setGrade(char g)
{
	grade = g;
}

ostream& operator<<(ostream& out, Student s)
{
	out << s.name << " - " << s.score << " - " << s.grade << endl;
	return out;
}

Student::~Student()
{

}