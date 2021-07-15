#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float scalor1 = 12;
	const float scalor2 = 0.0254;
	const float scalor3 = 2.2;
	float inch;
	float foot;
	float pounds;
	float BMI;
	cout << "Enter your height:" << endl;
	cout << "Feet:";
	cin >> foot;
	cout << "Inch:";
	cin >> inch;
	cout << "Enter your Weight:";
	cin >> pounds;

	float kg;
	float meter;

	kg = (float)(pounds / scalor3);
	meter = (foot * scalor1 + inch) * scalor2;
	BMI = (float)(kg / pow(meter, 2));
	cout << "Your height is " << meter << "meters" << endl;
	cout << "Your weight is" << kg << " kg" << endl;
	cout << "Your BMI is :" << BMI;
	return 0;

}