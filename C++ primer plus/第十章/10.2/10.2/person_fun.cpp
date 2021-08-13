#include"Person.h"
#include<iostream>
#include<string>
#include<cctype>
Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, LIMIT, fn);
}
void Person::Show() const 
{
	cout << fname << " ," << lname << endl;
}
void  Person::FormalShow() const
{
	cout << lname << " ," << fname << endl;
}
