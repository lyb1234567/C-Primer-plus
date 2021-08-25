#ifndef LIST_H_
#define LIST_H_
#include<iostream>
#include<string>
#include"Link_list.h"
using namespace std;
class list 
{
private:
	Link_list lst;
	string str;
public:
	list();
	list( string str);
	int len() { return lst.len(); }
	void append(double n);
	void append( string s);
	void append(const list& a);
	void  remove(double n);
	void  remove(string s);
	int index(double n);
	int index(string str);
	double max();
	double min();
	void sort();
	bool isempty() { return lst.isempty();}
	list operator +(double n);
	list operator -(double n);
	friend ostream& operator <<(ostream& os, list& lst);
	friend list operator+(list& l1, list& l2);
	friend list operator +(double n,  list& lst1);
    friend list operator -(double n,  list& lst1);
	int operator[](int index)
	{
	 return lst.find_nth(index + 1);
	}
	list operator[](const char *str);
	double pop();
	int count(int n);
	int count(string n);
	void clear();

};

#endif // !LIST_H_
#pragma once
