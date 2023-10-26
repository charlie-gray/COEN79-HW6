/*
* Name: Alex Green, Kieran Pazmino, Charlie Gray
* Email: aigreen@scu.edu, kpazmino@scu.edu, cjgray@scu.edu
*
* Assignment: Create a container representing the students
*             in a class via a vector that can add, remove,
*             traverse, and print.
* 2 of 4: Student.cpp
*/

#include <iostream>
#include "Student.h"

using namespace std;

namespace coen79
{
	Student::Student(void) : id{0}, name{}
	{

	}

	Student::Student(const int studentID, const string& firstName) : id{studentID}, name{firstName}
	{

	}

	int Student::getID(void) const
	{
		return this->id;
	}

	string Student::getName(void) const
	{
		return this->name;
	}

	ostream& operator<<(ostream& stream, const Student& student)
	{
		return stream << student.name << ":" << student.id;
	}

	bool operator==(const Student& leftStudent, const Student& rightStudent)
	{
		return leftStudent.id == rightStudent.id && leftStudent.name == rightStudent.name;
	}
}
