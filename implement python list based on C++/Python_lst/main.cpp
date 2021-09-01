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
	a.append(1);
	a.append(4);
	a.append(5);
	a.append(6);
	b.append("s");
	b.append("c");
	a.append(b);
	a.append("b");
	a.append(7);
	cout << a;
	return 0;

}