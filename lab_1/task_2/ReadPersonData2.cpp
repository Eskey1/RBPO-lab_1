#include "Header.h"
void ReadPersonData(string& name, unsigned short& age, unsigned short& weight, unsigned short& height)
{
	cout << endl << "Вызов второй функции ReadPersonData" << endl;
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
}