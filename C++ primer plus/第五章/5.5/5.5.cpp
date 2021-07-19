#include<iostream>
#include<string>
using namespace std;
int main()
{
	char name[20] = "sdasd";
	const char *Months[12] = { "Januray","February","March","April","May","June","Junly","August","Spetember","October","November","December"};
	int month_sale[12];
	for (int i = 0; i < 12; i++)
	{
		cout << Months[i] << ":";
		cin >> month_sale[i];
	}
	cout << "\n\n";
	for (int j = 0; j < 12; j++)
	{
		printf("%10s", Months[j]);
	}
	cout << endl;
	for (int j = 0; j < 12; j++)
	{
		printf("%7d", month_sale[j]);
	}
	return 0;

}