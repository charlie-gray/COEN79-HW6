/*
* Name: Alex Green, Kieran Pazmino, Charlie Gray
* Email: aigreen@scu.edu, kpazmino@scu.edu, cjgray@scu.edu
*
* Assignment: Create a container representing the students
*             in a class via a vector that can add, remove,
*             traverse, and print.
* 1 of 4: Student.h
*/

#ifndef STUDENT_H_
#define STUDENT_H_

namespace coen79
{
	class Student
	{
	private:
		int id;
		std::string name;
	public:
		Student(void);
		Student(const int studentID, const std::string& firstName);

		int getID(void) const;
		std::string getName(void) const;

		friend std::ostream& operator<<(std::ostream& stream, const Student& student);
		friend bool operator==(const Student& leftStudent, const Student& rightStudent);
	};
}

#endif
