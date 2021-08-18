#include"list.h"
#include<iostream>
using namespace std;
int main()
{
	list a;
	cout << a;
	a.append(3);
	a.append(4);
	a.append(7);
	a.append(10);
	a.remove(7);
	return 0;
}