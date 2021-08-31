#include"Cow.h"
#include<iostream>
using namespace std;
int main()
{
    //use the default constructor
	Cow c;
	c.ShowCow();
	cout << "\n\n";
	Cow a("Cow2", "Eat", 12.3);
	a.ShowCow();
	cout << "\n\n";
	Cow b(a);
	b.ShowCow();
	cout << "\n\n";
	Cow d = a;
	d.ShowCow();
	
}