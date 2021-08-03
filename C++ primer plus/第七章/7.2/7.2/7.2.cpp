#include<iostream>
using namespace std;
void show(double[]);
void input(double[]);
double average(double[]);
int main()
{
	double golf[10];
	cout << "Input the grades of golf" << endl;
	input(golf);
	cout << "\n\n\n";
	show(golf);
	cout << endl;
	cout << "The avarage of scores will be:" << average(golf);
	return 0;
}
void input(double golf[10])
{
	int i = 0;
	while (i<10)
	{
		cout << "Grage #" << i + 1 << " :";
		cin >> golf[i];
		i++;
		
	}
}
void show(double golf[10])
{
	for (int i = 0; i < 10; i++)
	{

		cout << "Grage #" << i + 1 << " :" << golf[i] << endl;
	}
}

double average(double golf[10])
{
	int i = 0;
	double sum = 0;
	double av = 0;
	while (i<10)
	{
		sum = sum + golf[i];
		i++;
	}
	av = sum / i;
	return av;
}

