#include<iostream>
#include<string>
#include"Bank.h"
using namespace std;
Bank::Bank()
{
	deposit = 0.0;
	name = "Jack";
	bank_account = "2312312312";

}
Bank::Bank(string account,  string n1, double dp)
{
	deposit=dp;
	name = n1;
	bank_account = account;
}
void Bank::show()
{
	cout << "Name:" << name << endl;
	cout << "Account number:" << bank_account << endl;
	cout << "Current deposit:"<< deposit << endl;
}
void Bank::add(double dp)
{
	deposit = deposit + dp;
}
void Bank::withdraw(double mon)
{
	if (deposit < 0)
		cout << "No sufficient deposit !!";
	else
	   deposit = deposit - mon;
}
