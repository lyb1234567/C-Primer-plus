#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int sum = 0;
	int num1;
	int num2;
	cout << "Input the first number:";
	cin >> num1;
	cout << "Input the second number:";
	cin >> num2;
	int i = num1;
	while (i <=num2)
	{
		sum = sum + i;
		i = i + 1;
	}
	cout << "The sum between the two number is: " << sum;
	return 0;
	
}