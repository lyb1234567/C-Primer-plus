#include<iostream>
using namespace std;
int main()
{
	float miles;
	float gas;
	cout << "Enter the distance:";
	cin >> miles;
	cout << "Enter the used gas:";
	cin >> gas;
	cout << "Used gas per Liter is:" << miles/gas << " miles" << " per liter";
	return 0;
}