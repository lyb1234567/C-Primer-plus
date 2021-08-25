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
	Link_list a;
	int g = 1;
	Link_list b;
	Link_list c;
	c.push_head(5);
	c.push_tail(6);
	b.push_tail(c);
	b.push_tail(3);
	b.push_tail(4);
	a.push_tail(b);
	a.push_tail(3);
	a.print_list();
	return 0;

}