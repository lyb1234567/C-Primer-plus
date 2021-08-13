#include<iostream>
#include "golf.h"
#include<string>
#include<cctype>
using namespace std;
const Golf& Golf::setgolf( const char* fn, int hc) 
{
	handicap = hc;
	for (int i = 0; i < strlen(fn); i++)
	{
		fullname[i] = fn[i];
	}
	return *this;
}
int Golf::setgolf() 
{
	cout << "Enter the full name:";
	cin.getline(fullname, Len);
	cout << "Enter the handicap:";
	cin >> handicap;
	cin.get();
	if (strlen(fullname) == 0)
	{
		return 0;
	}
	else
		return 1;
}
void Golf::hand(int hc)
{
	handicap = hc;
}
void Golf::showgolf() const
{
	cout << "Full name:" <<fullname << endl;
	cout << "Handicap:" << handicap;
}