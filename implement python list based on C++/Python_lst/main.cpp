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
	Link_list b;
	b.push_tail(5);
	b.push_tail("s");
	b.push_head(6);
	Link_list a;
	Node c;
	int l = NULL;
	c.link = &b;
	a.push_head(c);
	//a.push_tail(3);
	//a.push_head(4);
	Node* _head = a.get_head();
	_head->link->print_list();
	a.print_list();
}