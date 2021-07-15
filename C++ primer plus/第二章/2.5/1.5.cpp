#include<iostream>
using namespace std;
float converter(float);
int main()
{
	float degree;
	cout << "Please enter a Celsius value:";
	cin >> degree;
	cout << degree << " degrees Celsius is " << converter(degree) << " degrees Fahrenheit";
	return 0;
}
float converter(float degree)
{
	float i;
	i = 1.8 * degree + 32.0;
	return i;
}
