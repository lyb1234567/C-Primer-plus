#include<iostream>
using namespace std;
double average(double, double);
int main()
{
	double num1;
	double num2;
	cout << "Enter number 1:";
	cin >> num1;
	cout << "Enter number 2:";
	cin >> num2;
	while (num1 != 0 and num2 != 0)
	{
		cout << "The average will be " << average(num1, num2);
		cout << endl;
		cout << "Enter number 1:";
		cin >> num1;
		cout << "Enter number 2:";
		cin >> num2;
	}
	return 0;

}
double average(double a, double b)
{
	return (2.0 * a * b) / (a + b);
}