#include<iostream>
#include<string>
#include<cctype>
#include "Person.h"
using namespace std;
int main()
{
	Person one;
	Person two("Smythecarft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();
	return 0;
}