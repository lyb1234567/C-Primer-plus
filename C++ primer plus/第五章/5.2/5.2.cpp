#include<iostream>
#include<string>
#include<array>
using namespace std;
int main()
{
	array <long long, 16> factorials;
	factorials[1] = 1LL;
	factorials[0] = 1LL;
	for (int i = 2; i < 16; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < 16; i++)
	{
		cout << i << "i= " << factorials[i] << endl;
	}
	return 0;

}