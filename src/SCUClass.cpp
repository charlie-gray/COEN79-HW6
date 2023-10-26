/*
* Name: Alex Green
* Email: aigreen@scu.edu
* Student ID: 1643872
* Contact: 9252854240
*
* Assignment: Create a container representing the students
*             in a class via a linked list implementation
*             that can add, remove, traverse, and print.
* 6 of 6: SCUClass.cpp
*/

#include <iostream>

#include "Student.h"
#include "Node.h"
#include "SCUClass.h"

#include <new>

using namespace std;

namespace coen79
{
	SCUClass::SCUClass(void) : students{nullptr}
	{

	}

	SCUClass::~SCUClass(void)
	{
		delete this->students;
	}

	int SCUClass::insert(const Student& student)
	{
		Node* newNode{new (nothrow) Node{}};

		if(!newNode)
		{
			cout << "Failed to allocate new Node." << endl;
			return -1;
		}

		newNode->setNext(this->students);
		newNode->assign(student);
		this->students = newNode;
		return 0;
	}

	void SCUClass::remove(const Student& student)
	{
		if(this->students->retrieve() == student)
		{
			Node* newFirst{this->students->getNext()};
			this->students->setNext(nullptr);
			delete this->students;
			this->students = newFirst;
		}

		for(Node* node{this->students}; node->getNext(); node = node->getNext())
		{
			Node* next{node->getNext()};

			if(next->retrieve() == student)
			{
				node->setNext(next->getNext());
				next->setNext(nullptr);
				delete next;
				return;
			}
		}
	}

	void SCUClass::traverse(int (*process)(const int, Student&, void*), void* pointer)
	{
		Node* cursor{this->students};
		int i{0};

		while(cursor)
		{
			process(i++, cursor->retrieve(), pointer);
			cursor = cursor->getNext();
		}
	}

	void SCUClass::list(void) const
	{
		for(Node* node{this->students}; node; node = node->getNext())
		{
			cout << node->retrieve() << endl;
		}
	}
}
