#include"stack.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
Stack::Stack(int n)
{
	pitems = new Item[n];
	size = n;
	top = 0;

}
Stack::Stack(const Stack& st)
{
	int n = sizeof(st.pitems) / sizeof(Item);
	pitems = new Item[n];
	pitems = st.pitems;
	size = st.size;
	top = st.top;
}
Stack::~Stack()
{
	delete[]pitems;
}
bool Stack::isempty()const
{
	return (top == 0);
}
bool Stack::isfull()const
{
	return (top == MAX);
}
bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item &item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}
Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
		return *this;
	else
	{
		delete [] pitems;
		size = st.size;
		int n = st.size;
		pitems = new Item[n];
		pitems = st.pitems;
		return *this;
	}
	    
}