#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <iomanip>


using namespace std;

extern unsigned short height;
extern string salary2;
unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonSalary(double* salary);
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& weight, unsigned short& height);
void WritePersonData(string& name, const string& height, const string& weight, const unsigned short* age);