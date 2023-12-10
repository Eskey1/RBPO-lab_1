#include <iostream>
#include <string>
#include <locale>
using namespace std;

unsigned short height;
string salary2;

//unsigned short ReadPersonAge(unsigned short age)
//{
//	cout << "������� �������: ";
//	cin >> age;
//	return age;
//}

unsigned short ReadPersonAge()
{
	unsigned short age;
	cout << "������� �������: ";
	cin >> age;
	return age;
}
//string ReadPersonName(string name)
//{
//	cout << "������� ���: ";
//	cin >> name;
//	return name;
//}
string ReadPersonName()
{
	string name;
	cout << "������� ��� ��������: ";
	cin.ignore();
	getline(cin, name);
	return name;
}

void ReadPersonHeight()
{
	cout << "������� ����: ";
	cin >> height;
}

void ReadPersonWeight(unsigned short& weight)
{
	cout << "������� ���: ";
	cin >> weight;
}

void ReadPersonSalary(double* salary)
{
	cout << "������� ���������� ����� ��������: ";
	cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << endl << "����� ������ ������� ReadPersonData" << endl;
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& weight, unsigned short& height)
{
	cout << endl << "����� ������ ������� ReadPersonData" << endl;
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
}

void WritePersonData(string& name, const string& height, const string& weight, const unsigned short* age)
{
	cout << endl << "���: " << name << endl <<
		"����: " << height << endl <<
		"���: " << weight << endl <<
		"�������: " << *age << endl <<
		"���������� �����: " << salary2 << endl;
}

#ifndef DO_NOT_DEFINE_MAIN
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
#endif