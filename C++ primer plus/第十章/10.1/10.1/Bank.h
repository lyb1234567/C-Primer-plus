#ifndef BANK_H_
#define BANK_H_
#include<iostream>
#include<string>
using namespace std;
class Bank
{
private:
	string bank_account;
	string name;
	double deposit;
public:
	Bank();
	Bank(string account, string n1, double dp);
	void show();
	void add(double dp);
	void withdraw(double mon);
};
#endif // !BANK_H_

#pragma once
