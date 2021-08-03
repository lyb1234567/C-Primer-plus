#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int n;
	cout << "Enter a number:";
	while (cin >> n)
	{
		cout << "The factorial of " << n << "! is " << factorial(n);
		cout << "\n\n";
		cout << "Enter a number:";
	}
	return 0;
}
int factorial(int n)
{
	if (n == 0 or n == 1)
	{
		return 1;
	}
	else if (n >= 2)
	{
		return n * factorial(n - 1);
	}
}