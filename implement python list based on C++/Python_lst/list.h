#ifndef LIST_H_
#define LIST_H_
#include<iostream>
#include<string>
using namespace std;
class list 
{
private:
	enum {MAX=10000};
	enum Mode{STR,DOUBLE};
	double lst[MAX];
	string s[MAX];
	int i;
	int p;
	Mode mode;
public:
	list();
	list(const string& str);
	int len();
	void  append( list& lst1);
	void append(double n);
	void append(string s);
	void  remove(double n);
	void  remove(string s);
	double max();
	double min();
	void sort();
	void show();
	bool isempty();
	bool isfull();
	list operator +(double n);
	list operator -(double n);
	friend ostream& operator <<(ostream& os, list& lst);
	friend list operator+(list& l1, list& l2);
	friend list operator +(double n,  list& lst1);
    friend list operator -(double n,  list& lst1);
	double& operator[](int index);
	list operator[](const char *str);

};
#endif // !LIST_H_
#pragma once
