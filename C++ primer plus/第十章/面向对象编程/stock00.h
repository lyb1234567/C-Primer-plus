#ifndef STOCK00_H_
#define STOCK00_H_
#include<string>
using namespace std;
class Stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}
public:
	double x = 3;
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
#endif // !STOCK00_H_
#pragma once
