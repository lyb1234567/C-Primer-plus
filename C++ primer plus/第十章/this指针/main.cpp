#include<iostream>
#include<string>
#include"stock20.h"
using namespace std;
int main()
{
	Stock stock[3] = { Stock("jack",12.1),Stock("Mick",22.3),Stock("Jack ma",228.9)};
	for (int i = 0; i < 3; i++)
	{
		stock[i].show();
	}
	cout << "\n";
	 const Stock* top = &stock[0];
	for (int i = 0; i < 3; i++)
	{
		top = &top->topval(stock[i]);
	}
	cout << "Most valuable:";
	top->show();

	return 0;
}