#include<iostream>
#include"Bank.h"
#include<string>
int main()
{
	Bank bank1("31231231231", "Yanbo Liu", 500);
	bank1.show();
	bank1.add(1000);
	bank1.show();
	bank1.withdraw(1200);
	bank1.show();
}