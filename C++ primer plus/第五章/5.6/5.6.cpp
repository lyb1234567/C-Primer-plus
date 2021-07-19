#include<iostream>
#include<string>
using namespace std;
int main()
{
	const char* Months[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	const int mon = 12;
	const int year = 3;
	float sale[year][mon];
	for (int j = 0; j < year; j++)
	{
		cout << "Year "<<j<< ":\t";
		for (int i = 0; i < mon; i++)
		{
			cin >> sale[j][i];
		}
		cout << endl;
	}
	cout << endl;
	float sum = 0;
	cout << "\t";
	for (int k = 0; k < mon; k++)
	{
		cout << Months[k] <<" ";
	}
	cout << endl;
	for (int j = 0; j < year; j++)
	{
		cout << "Year " <<j<<":\t";
		for (int i = 0; i < mon; i++)
		{
			cout << sale[j][i] << "\t";
			sum = sum + sale[j][i];
		}
		cout << endl;
	}
	cout << "The sum is: " << sum;
	return 0;
}
