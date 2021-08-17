#include<iostream>
#include "Time.h"
using namespace std;
int main()
{
	Time wedding(4, 35);
	Time waxing(2, 47);
	Time total = wedding + waxing;
	total.Show();
	Time mul = 2.5 * total;
	mul.Show();
	cout << mul;
	return 0;
}