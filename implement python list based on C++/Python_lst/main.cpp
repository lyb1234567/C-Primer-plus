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
	a.append(0);
	a.append(1);
	list b;
	b.append(1);
	b.append(2);
	a.insert(1, 2);
	a.insert(1, "sb");
	a.insert(1,b);
	cout << a;
	return 0;

}