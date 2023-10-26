/*
* Name: Alex Green
* Email: aigreen@scu.edu
* Student ID: 1643872
* Contact: 9252854240
*
* Assignment: Create a container representing the students
*             in a class via a linked list implementation
*             that can add, remove, traverse, and print.
* 4 of 6: Node.cpp
*/

#include <iostream>

#include "Student.h"
#include "Node.h"

namespace coen79
{
	Node::Node(void) : data{}, next{nullptr}
	{

	}

	Node::~Node(void)
	{
		if(this->next)
		{
			delete this->next;
		}
	}

	void Node::assign(const Student& student)
	{
		this->data = student;
	}

	Student& Node::retrieve(void)
	{
		return this->data;
	}

	void Node::setNext(Node* nextNode)
	{
		this->next = nextNode;
	}

	Node* Node::getNext(void)
	{
		return this->next;
	}
}
