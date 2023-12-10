#include "Header.h"
string ReadPersonName()
{
	string name;
	cout << "¬ведите им€ человека: ";
	cin.ignore();
	getline(cin, name);
	return name;
}