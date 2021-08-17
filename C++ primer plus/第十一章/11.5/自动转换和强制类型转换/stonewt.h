#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>
using namespace std;
class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	explicit Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	friend ostream& operator <<(ostream& os, const Stonewt s);
	Stonewt operator +(const  Stonewt&s)const;
	Stonewt operator -(const  Stonewt&s)const;
	friend bool operator >=(const Stonewt s1, const Stonewt s2);
	friend bool operator <=(const Stonewt s1, const Stonewt s2);
	friend bool operator >(const Stonewt s1, const Stonewt s2);
	friend bool operator <(const Stonewt s1, const Stonewt s2);
	friend bool operator ==(const Stonewt s1, const Stonewt s2);
	friend bool operator !=(const Stonewt s1, const Stonewt s2);
	void show_lbs()const;
	void show_stn()const;
};
#endif // !STONEWT_H_

#pragma once
