#ifndef BASE_H_
#define BASE_H_
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Cd
{
private:
	char performance[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
    Cd();
	virtual ~Cd();
	virtual void Report()const;
	virtual Cd& operator=(const Cd& d);
};
class Classic:public Cd
{
private:
	char work[50];
public:
	Classic(const char* name, const char* s1, const char* s2, int n, double x) :Cd(s1, s2, n, x)
	{
		int len = strlen(name);
		strcpy_s(work, len + 1, name);

	}
	Classic(const char *name,const Cd& c):Cd(c)
	{
		int n = strlen(name);
		strcpy_s(work, n + 1, name);
	}
	Classic()
	{
		cout << "Deafaule constructor for Classic" << "\n\n";
	}
	virtual ~Classic();
	virtual void Report()const;
	virtual Classic& operator=(const Classic& c);
};
#endif // !BASE_H_

#pragma once
