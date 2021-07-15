#include<iostream>
using namespace std;
int longmulti(int);
int main()
{
	int long_unit;
	cout << "Input a unit of long:";
	cin >> long_unit;
	cout << "The output will be:" << longmulti(long_unit);
	return 0;
}
int longmulti(int long_unit)
{
	return 220 * long_unit;
}