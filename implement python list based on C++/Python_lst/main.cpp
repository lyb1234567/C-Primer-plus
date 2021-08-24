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
	a.append(5);
	a.append(7);
	a.append(5);
	a.clear();
	cout << a;
	return 0;
}