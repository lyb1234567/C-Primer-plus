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
	e.append("j");
	a.append("s");
	b.append("s");
	b.append("c");

	d.append(9);
	a.append(7);
	list c = e+a + b + d;
	cout << c[0];

	return 0;

}