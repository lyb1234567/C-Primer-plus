#include<iostream>
#include<string>
using namespace std;
int main()
{
	float Daphne = 100;
	float Cleo = 100;
	int n = 0;
	while (Cleo<=Daphne)
	{
		Daphne = Daphne + 10;
		Cleo = Cleo * 1.05;
		n = n + 1;
	}
	cout << "Year: " << n << endl;
	cout << "Daphne: " << Daphne << endl;
	cout << "Cleo: " << Cleo << endl;
	return 0;
}