#include<iostream>
#include"Link_list.h"
#include<string>
#include"list.h"
#include <map>
#include <iostream>
#include <cassert>
int main()
{
	using namespace std;
	list a;
	list b;
	list d;
	list e;
	e.append(1);
	a.append(2);
	b.append(3);
	b.append(4);

	d.append(9);
	d.append(10);
	a.append(7);
	a.append(d);
	list c = list(a + b);
	cout <<c;

	return 0;

}