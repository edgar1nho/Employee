#include "Employee.h"

int main()
{
	const int size = 5;
	Employee* arr = new Employee[size];
	for(int i = 0; i < size; ++i)
	{
		arr[i].setData();
	}
	for(int i = 0; i < size; ++i)
	{
		arr[i].putData();
	}
	delete [] arr;
}
