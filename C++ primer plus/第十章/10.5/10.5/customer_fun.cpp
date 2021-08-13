#include"customer.h"
#include<iostream>
#include<string>
using namespace std;
Stack::Stack()
{
	top = 0;
	total = 0.0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item&item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		total = total+item.payment;
		cout << "Delete one customer" << endl;
		show();
		return true;
	}
	else
		return false;
}
void Stack::show()const
{
	cout << "Total:" << total << endl;
	cout << "Remaining customers:" << top << endl;
}
