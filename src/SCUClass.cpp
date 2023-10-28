/*
* Name: Alex Green, Kieran Pazmino, Charlie Gray
* Email: aigreen@scu.edu, kpazmino@scu.edu, cjgray@scu.edu
*
* Assignment: Create a container representing the students
*             in a class via a vector that can add, remove,
*             traverse, and print.
* 4 of 4: SCUClass.cpp
*/

#include <iostream>
#include <vector>

#include "Student.h"
#include "SCUClass.h"

#include <new>

using namespace std;

namespace coen79
{
	SCUClass::SCUClass(void) : students{}
	{

	}

	int SCUClass::insert(const Student& student)
	{
		this->students.push_back(student);
		return 0;
	}

	void SCUClass::remove(const int studentID)
	{
		for(int i{0}; i < this->students.size(); ++i)
		{
			if(this->students[i].getID() == studentID)
			{
				this->students.erase(this->students.begin() + i);
				return;
			}
		}
	}

	void SCUClass::list(void) const
	{
		for(const Student& student : this->students)
		{
			cout << student << endl;
		}
	}

	vector<Student>::iterator SCUClass::begin(void)
	{
		return this->students.begin();
	}

	vector<const Student>::iterator SCUClass::cbegin(void)
	{
		return this->students.cbegin();
	}

	vector<Student>::iterator SCUClass::end(void)
	{
		return this->students.end();
	}

	vector<const Student>::iterator SCUClass::cend(void)
	{
		return this->students.cend();
	}
}
