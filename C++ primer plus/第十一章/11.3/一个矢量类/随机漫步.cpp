#include<iostream>
#include "Vector.h"
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int i = 0;
	int count[100];
	cout << "Enter the target:";
	cin >> target;
	cout << "Enter step length:";
	cin >> dstep;
	while (i<25)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout <<"#"<<i+1<<":"<<steps << endl;
		count[i] = steps;
		i++;
		steps = 0;
		result.reset(0.0, 0.0,Vector::RECT);
	}
	int max = count[0];
	int min = count[0];
	cout << endl;
	int sum = 0;
	for (int j = 0; j < i ; j++)
	{
		sum = sum + count[j];
		if (max <= count[j])
			max = count[j];

		if (min >= count[j])
			min = count[j];
	}
	cout << "Max steps:" << max << endl;
	cout << "Minum steps:" << min << endl;
	cout << "Average steps:" << sum / i << endl;
	cout << "Bye!\n";
	return 0;
}