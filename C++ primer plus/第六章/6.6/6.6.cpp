#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct donator
{
	string name;
	double money;
};
int main()
{
	int number;
	cout << "Enter the number of donators:";
	cin >> number;
	donator *people = new donator[number];
	for (int i = 0; i < number; i++)
	{
		cout << "donator #" << i + 1 << endl;
		cout << "Enter the name:";
		cin >> people[i].name;
		cout << "Enter the money:";
		cin >> people[i].money;
		cout << endl;
	}
	string type[2] = { "Grant Patrons","Patrons" };
	int count_grant = 0;
	int count_partons = 0;
	for (int j = 0; j < 2; j++)
	{
		cout << type[j] << ":" << endl;
		for (int k = 0; k < number; k++)
		{
			if (people[k].money > 10000 and j == 0)
			{
				count_grant++;
				cout << people[k].name << endl;
			}
			else if (people[k].money < 10000 and j == 1)
			{
				count_partons++;
				cout << people[k].name << endl;
			}
		}
		if (j == 0 and count_grant == 0)
		{
			cout << "none";
		}
		if (j == 1 and count_partons == 0)
		{
			cout << "none";
		}
		cout << endl;
	}
	return 0;
}