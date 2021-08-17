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
	Vector result(30.0, 40.0, Vector::POL);
	cout << result  << endl;
	/*unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps,the subject has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "Average outward distance per step=" << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0,Vector::RECT);
		cout << "Entere target distance(q to quit):";
	}*/
	cout << "Bye!\n";
	return 0;
}