#include <iostream>
#include <string>

class Employee
{
	private:
		std::string name;
		static long count;
		int id;
	public:
		Employee();
		void setData();
		void putData();

};
