#ifndef LIST_H_
#define LIST_H_
#include<iostream>
#include<string>
using namespace std;
class list 
{
private:
	enum {MAX=10000};
	double lst[MAX];
	int i;
public:
	list();
	int len();
	void  append(const list& lst1);
	void append(double n);
	void  remove(double n);
	bool isempty();
	bool isfull();
	list operator +(double n) ;
	list operator -(double n);
	friend ostream& operator <<(ostream& os,  list& lst);
	list operator +(const list& lst1);
	friend list operator +(double n,  list& lst1);
    friend list operator -(double n,  list& lst1);
	int operator [](int  index);

	
};
#endif // !LIST_H_
#pragma once
