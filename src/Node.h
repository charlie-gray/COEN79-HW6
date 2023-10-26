/*
* Name: Alex Green
* Email: aigreen@scu.edu
* Student ID: 1643872
* Contact: 9252854240
*
* Assignment: Create a container representing the students
*             in a class via a linked list implementation
*             that can add, remove, traverse, and print.
* 3 of 6: Node.h
*/

#ifndef NODE_H_
#define NODE_H_

namespace coen79
{
	class Node
	{
	private:
		Student data;
		Node* next;
	public:
		Node(void);
		virtual ~Node(void);

		void assign(const Student& student);
		Student& retrieve(void);
		void setNext(Node* nextNode);
		Node* getNext(void);
	};
}

#endif
