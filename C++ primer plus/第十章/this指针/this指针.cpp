#include"stock20.h"
#include<iostream>
#include<string>
using namespace std;
void Stock::show() const 
{
	cout << "Name:" << name_ << endl;
	cout << "Worth:" << worth_ << endl;
	cout << endl;
}
Stock::Stock()
{
	cout << "Using default Stock" << endl;
}
Stock::Stock(const string& name, double worth)
{
	name_ = name;
	worth_ = worth;
}
Stock::~Stock()
{
	cout << "Bye!!";
}
const Stock& Stock::topval(const Stock& s)const
{
	if (s.worth_ > worth_)
		return s;
	else
		return *this;
}
