/*
* Name: Alex Green, Kieran Pazmino, Charlie Gray
* Email: aigreen@scu.edu, kpazmino@scu.edu, cjgray@scu.edu
*
* Assignment: Create a container representing the students
*             in a class via a vector that can add, remove,
*             traverse, and print.
* 3 of 4: SCUClass.h
*/

#ifndef SCUCLASS_H_
#define SCUCLASS_H_

namespace coen79
{
	class SCUClass
	{
	private:
		std::vector<Student> students;
	public:
		SCUClass(void);

		int insert(const Student& student);
		void remove(const Student& student);
		void list(void) const;
		std::vector<Student>::iterator begin(void);
		std::vector<const Student>::iterator cbegin(void);
		std::vector<Student>::iterator end(void);
		std::vector<const Student>::iterator cend(void);
	};
}

#endif
