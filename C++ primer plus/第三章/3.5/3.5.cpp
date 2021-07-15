#include<iostream>
using namespace std;
int main()
{
	long long US_P;
	long long World_P;
	cout << "Enter the world's population:";
	cin >> World_P;
	cout << "Enter the population of the US:";
	cin >> US_P;
	cout << "The population of the US is " << ((float)(US_P) / (float)World_P)*100 << "% of the world population";
	return 0;
}