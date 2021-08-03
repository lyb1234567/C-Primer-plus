#include<iostream>
double caculate(double, double, double (*pt)(double, double));
double add(double, double);
double sub(double, double);
double multi(double, double);
using namespace std;
int main()
{
	double (*pt[3])(double, double) = {add,sub,multi };
	double a;
	double b;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter number 1:";
		cin >> a;
		cout << "Enter number 2:";
		cin >> b;
		if (i == 0)
		{
			cout << "The addiction will be:" << pt[i](a, b) << endl;
		}
		if (i == 1)
		{
			cout << "The substraction will be:" << pt[i](a, b) << endl;
		}
		if (i == 2)
		{
			cout << "The multiplication will be:" << pt[i](a, b) << endl;
		}
	}
	return 0;
}
double add(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double multi(double x, double y)
{
	return x * y;
}
double caculate(double x, double y, double(*pt)(double a, double b))
{
	return (*pt)(x, y);
}

