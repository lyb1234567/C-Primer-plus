#ifndef Time_H_
#define Time_H_
#include<iostream>
using namespace std;
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void Addhr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator +(const Time& t1,const Time &t2);
	friend Time operator - (const Time& t1,const Time & t2);
	friend Time operator *(const Time &t1,double mult);
	friend Time operator +(const Time& t1, const Time& t2);
	void Show()const;
	friend Time operator *(double m, const Time& t);
	friend ostream & operator <<(ostream& os, const Time& t);
};
#endif // !Time_H_

#pragma once
