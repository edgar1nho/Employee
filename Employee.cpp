#include "Employee.h"

long Employee::count = 0;

Employee::Employee()
{
	++count;
	id = count;
}

void Employee::setData()
{
	std::cout << "Enter the employee name\n";
	std::cin >> name;
}

void Employee::putData()
{
	std::cout << "Employee's name is " << name << " and his/her id is " << id << '\n'; 
}
