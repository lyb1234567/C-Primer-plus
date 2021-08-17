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
	void show_lbs()const;
	void show_stn()const;
};
#endif // !STONEWT_H_

#pragma once
