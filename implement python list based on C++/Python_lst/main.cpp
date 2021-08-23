#include<iostream>
#include"Link_list.h"
#include<string>
#include"list.h"

int main()
{
	list a;
	for (int i = 0; i < 5; i++)
	{
		a.append(i);
	}
	cout << a << endl;
	int b = a.len();
	for (int i = 0; i < b; i++)
	{
		cout << a.pop() << endl;
	}
	cout << a;
}