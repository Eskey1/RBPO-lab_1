#include "Header.h"
string salary2;
void WritePersonData(string& name, const string& height, const string& weight, const unsigned short* age)
{
	cout << endl << "Имя: " << name << endl <<
		"Рост: " << height << endl <<
		"Вес: " << weight << endl <<
		"Возраст: " << *age << endl <<
		"Заработная плата: " << setprecision(2) << salary2 << endl;
}