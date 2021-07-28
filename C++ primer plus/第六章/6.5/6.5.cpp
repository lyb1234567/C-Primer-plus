#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	float rate[4] = {0.0,0.1,0.15,0.2 };
	float income;
	do
	{
		cout << "Enter your income:";
		cin >> income;
		if (income >= 0 and income <= 5000)
		{
			float tax = 0;
			cout << "The tax is :" << tax << endl;
		}
		if (income > 5000 and income <= 15000)
		{
			float tax = 5000*rate[0] + (income - 5000) * rate[1];
			cout << "The tax is :" << tax << endl;
		}
		if (income > 15000 and income <= 35000)
		{
			float tax = 5000 * rate[0] + 10000 * rate[1] + (income - 15000) * rate[2];
			cout << "The tax is :" << tax << endl;
		}
		if (income >35000)
		{
			float tax = 5000 * rate[0] + 10000 * rate[1] + 20000 * rate[2] + (income - 35000) * rate[3];
			cout << "The tax is :" << tax << endl;
		}
	} while (income>0);
	return 0;
}