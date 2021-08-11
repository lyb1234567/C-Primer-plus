#include"golf.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void setgolf(golf& g, const char* name, int hc)
{
	for (int i = 0; i < strlen(name) + 1; i++)
	{
		g.fullname[i] = name[i];
	}
	g.handicip = hc;
}

int setgolf(golf& g)
{
	cout << "Enter the full name:";
	cin.getline(g.fullname, 40);
	cout << "Enter handcap:";
	cin >> g.handicip;
	cin.get();
	if (strlen(g.fullname)==0)
	{
		return 0;
	}
	else
		return 1;
}

void handicap(golf& g, int hc)
{
	g.handicip = hc;
}
void showgolf(const golf& g)
{
	cout << "Full name:" << g.fullname << endl;
	cout << "Handicap:" << g.handicip;
}