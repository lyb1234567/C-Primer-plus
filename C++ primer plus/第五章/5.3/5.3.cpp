#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	do
	{

		cout << "Enter a number:";
		cin >> number;
		sum = sum + number;
		cout << sum << endl;
	} while (number != 0);
	return 0;

}
