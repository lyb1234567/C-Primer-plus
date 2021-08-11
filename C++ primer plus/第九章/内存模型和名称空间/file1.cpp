#include<iostream>
#include"coordin.h"
using namespace std;
extern double x;
int main()
{
	rect rplace;
	polar pplace;
	cout << "External x:" << x<< endl;
	cout << "Enter the x and y values:";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers(q to quit)";
	}
	cout << "Bye!\n";
	return 0;
}