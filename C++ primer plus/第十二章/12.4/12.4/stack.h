#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long  Item;
class Stack
{
private:
	enum{MAX=10};
	Item* pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack& st);
	~Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
	int show_top()const { return top; };
	friend ostream& operator<<(ostream& os, const Stack& st)
	{
		os << "This Stack is:" << endl;
		int len = st.top - 1;
		while (len != -1)
		{
			cout << st.pitems[len] << endl;
			len--;
		}
		return os;
	}
};
#endif // !STACK_H_

#pragma once
