#ifndef THIS_H_
#define THIS_H_
#include<iostream>
#include<string>
using namespace std;
class Stock
{
	double worth_;
	string name_;
public:
	void show() const;
	Stock();
	Stock(const string& name, double worth);
	~Stock();
	const Stock& topval(const Stock& s) const;
};
#endif // !THIS_H_

#pragma once
