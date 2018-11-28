#include "pch.h"
#include <iostream>
#include "course.h"
#include "teacher.h"
#include "student.h"
#include "person.h"

int main()
{
    std::vector<room*> rooms;
    std::vector<Person*> persons;
    std::vector<activity*> activities;

	Teacher T;
	std::cin>>t;
	std::cout<<t;
	Student s;
	std::cin>>s;
	std::cout<<s;

	rooms.push_back(newRoom('A3'));
	persons.push_back(newPerson('Andrei'));
	activities.push_back(newActivity('POO'));
	persons[0]->AddRole(new student);

	return 0;
}
