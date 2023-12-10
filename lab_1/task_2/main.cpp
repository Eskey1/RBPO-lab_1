#include "Header.h"
unsigned short height;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned short age = ReadPersonAge();
	string name = ReadPersonName();
	unsigned short weight = 0;
	double salary;
	ReadPersonHeight();
	ReadPersonWeight(weight);
	ReadPersonSalary(&salary);
	salary2 = to_string(salary);
	ReadPersonData(name, age, salary);
	ReadPersonData(name, age, weight, height);
	WritePersonData(name, to_string(height), to_string(weight), &age);
}