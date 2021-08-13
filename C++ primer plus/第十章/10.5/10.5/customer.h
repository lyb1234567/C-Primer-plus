#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include<iostream>
using namespace std;
struct customer
{
	char fullname[35];
	double payment;
};
typedef customer Item;

class Stack
{
private:
	double total;
	enum {MAX=10};
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);
	void show() const;
};
#endif // !CUSTOMER_H_

#pragma once
