#include<iostream>
#include<string>
#include"Betelg.h"
using namespace std;
int main()
{
	Pl p;
	p.show();
	int a = 60;
	p.ci(a);
	p.show();
	p=Pl("Mike");
	p.show();
}