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
public:
	list();
	list(const string& str);
	int len() { return lst.len(); }
	void append(double n);
	void append(string s);
	void  remove(double n);
	void  remove(string s);
	double max();
	double min();
	void sort();
	void show();
	bool isempty() { return lst.isempty();}
	list operator +(double n);
	list operator -(double n);
	friend ostream& operator <<(ostream& os, list& lst);
	friend list operator+(list& l1, list& l2);
	friend list operator +(double n,  list& lst1);
    friend list operator -(double n,  list& lst1);
	int operator[](int index);
	list operator[](const char *str);

};
#endif // !LIST_H_
#pragma once
