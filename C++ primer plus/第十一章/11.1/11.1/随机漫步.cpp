#include<iostream>
#include "Vector.h"
#include <cstdlib>
#include <ctime>
#include<fstream>
#include<string>
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
	ofstream Outfile;
	string filename = "record.txt";
	Outfile.open(filename);
	cout << "Enter target distance (q to quit):";
	while (cin >> target)
	{
		cout << "Enter step length:";
		if (!(cin >> dstep))
			break;
		Outfile << "Target Distance:" << target << ", " << "Step size:" << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			Outfile << steps << ": " << "(x,y)=" << "(" << result.xval() << "," << result.yval() << ")" << endl;
			steps++;
		}
		Outfile << "After " << steps << " steps,the subject has the following location:\n";
		cout << "After " << steps << " steps,the subject has the following location:\n";
		Outfile << result << endl;
		cout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		Outfile << "or\n" << result << endl;
		cout << "Average outward distance per step=" << result.magval() / steps << endl;
		Outfile << "Average outward distance per step=" << result.magval() / steps << "\n\n\n";
		steps = 0;
		result.reset(0.0, 0.0,Vector::RECT);
		cout << "Entere target distance(q to quit):";
	}
	cout << "Bye!\n";
	return 0;
}