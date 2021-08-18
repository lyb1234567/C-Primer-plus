#include"list.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	list a;
	a.append(3);
	a.append(1);
	a.append(21);
	a.append(25);
	a.append(13);
	cout << a << endl;
	cout << a.min();
}