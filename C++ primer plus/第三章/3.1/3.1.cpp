#include<iostream>
using namespace std;
int main()
{
	const float scaler =12;
	float inch;
	cout << "Enter your height(of inches):";
	cin >> inch;
	int foot = inch / scaler;
	float remaining = inch - (foot * scaler);
	cout << "Your height is " << foot << " feet," << remaining << " inches";

	return 0;
}