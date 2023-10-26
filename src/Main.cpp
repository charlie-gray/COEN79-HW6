#include <iostream>
#include <fstream>

#include "Student.h"
#include "Node.h"
#include "SCUClass.h"

using namespace std;
using namespace coen79;

int main(void)
{
	ifstream dataFile{"scuclass.test"};

	if(!dataFile.is_open())
	{
		cout << "Failed to open data file." << endl;
		return -1;
	}

	SCUClass theClass{};
	char command{' '};
	int id{};
	string name{};

	while(dataFile >> command)
	{
		switch(command)
		{
		case 'A':
			dataFile >> id >> name;
			theClass.insert(Student{id, name});
			cout << "Adding Student: " << name << " with id " << id << endl;
			break;
		case 'X':
			dataFile >> id >> name;
			theClass.remove(Student{id, name});
			cout << "Removing Student: " << name << " with id " << id << endl;
			break;
		case 'L':
			theClass.list();
			break;
		default:
			cout << "Unknown command: " << command << endl;
		}
	}

	return 0;
}
