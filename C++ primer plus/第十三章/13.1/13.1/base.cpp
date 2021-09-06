#include"base.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
Cd::Cd()
{
	const char* n = "You did a good job";
	const char* c = "Apple";
	strcpy_s(performance, strlen(n) + 1, n);
	strcpy_s(label , strlen(c) + 1, c);
    selections = 0;
	playtime = 0.0;
}
Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	strcpy_s(performance, len1 + 1, s1);
	strcpy_s(label, len2 + 1, s2);
	selections = n;
	playtime = x;
	
}
Cd::~Cd()
{
	cout << "destructor for Cd!!" << "\n\n";

}
void Cd::Report()const
{
	cout << "Performance:" << performance << endl;
	cout << "Label:" << label << endl;
	cout << "Selections:" << selections << endl;
	cout << "Playtime:" << playtime << endl;
}
Cd& Cd::operator=(const Cd& d)
{
	if (this ==& d)
		return *this;
	else
	{
		int len1 = strlen(d.performance);
		int len2 = strlen(d.label);
		strcpy_s(performance, len1 + 1, d.performance);
		strcpy_s(label, len2 + 1, d.label);
		selections = d.selections;
		playtime = d.playtime;
		return *this;
	}
}

Classic::~Classic()
{
	cout << "destructor for Classic" << "\n\n";
}
void Classic::Report()const
{
	Cd::Report();
	cout << "Work:" << work << endl;
}
Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return *this;
	else
	{
		int len = strlen(c.work);
		strcpy_s(work, len + 1, c.work);
		return *this;
	}
 }