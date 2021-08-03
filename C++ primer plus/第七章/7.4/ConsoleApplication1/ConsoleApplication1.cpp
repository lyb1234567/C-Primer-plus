#include<iostream>
#include<cctype>
#include<string>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main()
{
    unsigned n1;
	unsigned n2;
	unsigned r1;
	unsigned r2;
	int n = 23;
	cout << "Enter the first range and number of choices:";
	cin >> r1 >> n1;
	cout << "Enter the second range:";
	cin >> r2 >> n2;
	while (1)
	{
		if (r1 <= n1 or r2 <= n2)
		{
			break;
		}
		cout << "The probability will be " << probability(r1, n1) * probability(r2, n2);
		cout << "\n\n";
		cout << "Enter the first range and number of choices:";
		cin >> r1 >> n1;
		cout << "Enter the second range:";
		cin >> r2 >> n2;
	}
	return 0;

}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p >> 0; n--, p--)
	{
		result = result * p / n;
	}
	return result;
}