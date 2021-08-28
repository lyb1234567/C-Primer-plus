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
	cout << (a != b);
	return 0;

}