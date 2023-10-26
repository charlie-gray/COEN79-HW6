/*
* Name: Alex Green
* Email: aigreen@scu.edu
* Student ID: 1643872
* Contact: 9252854240
*
* Assignment: Create a container representing the students
*             in a class via a linked list implementation
*             that can add, remove, traverse, and print.
* 2 of 6: Student.cpp
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
