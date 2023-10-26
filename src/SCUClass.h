/*
* Name: Alex Green
* Email: aigreen@scu.edu
* Student ID: 1643872
* Contact: 9252854240
*
* Assignment: Create a container representing the students
*             in a class via a linked list implementation
*             that can add, remove, traverse, and print.
* 5 of 6: SCUClass.h
*/

#ifndef SCUCLASS_H_
#define SCUCLASS_H_

namespace coen79
{
	class SCUClass
	{
	private:
		Node* students;
	public:
		SCUClass(void);
		virtual ~SCUClass(void);

		int insert(const Student& student);
		void remove(const Student& student);
		void traverse(int (*process)(const int, Student&, void*), void* pointer);
		void list(void) const;
	};
}

#endif
