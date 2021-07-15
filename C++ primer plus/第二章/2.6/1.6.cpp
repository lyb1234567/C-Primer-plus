#include<iostream>
using namespace std;
double converter(double);
int main()
{
	double light_year;
	cout << "Enter the number of light years:";
	cin >> light_year;
	cout << light_year << " light years= " << converter(light_year) << " astronomical units";
	return 0;
}
double converter(double light_year)
{
	return light_year * 63240;
}