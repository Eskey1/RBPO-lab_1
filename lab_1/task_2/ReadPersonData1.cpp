#include "Header.h"
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << endl << "Вызов первой функции ReadPersonData" << endl;
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}