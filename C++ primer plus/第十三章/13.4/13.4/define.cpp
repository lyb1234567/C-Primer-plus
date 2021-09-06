#include"port.h"
#include<iostream>
#include<string>
using namespace std;
Port::Port(const char* br , const char* st , int b )
{
	int len1 = strlen(br);
	brand = new char[len1 + 1];
	strcpy_s(brand, len1 + 1, br);
	int len2 = strlen(st);
	strcpy_s(style, len2 + 1, st);
	bottles = b;
}
Port::Port(const Port& p)
{
	int len1 = strlen(p.brand);
	int len2 = strlen(p.style);
	brand = new char[len1 + 1];
	strcpy_s(brand, len1 + 1, p.brand);
	strcpy_s(style, len2 + 1, p.style);
	bottles = p.bottles;
}
Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return *this;
	else
	{
		int len1 = strlen(p.brand);
		int len2 = strlen(p.style);
		brand = new char[len1 + 1];
		strcpy_s(brand, len1 + 1, p.brand);
		strcpy_s(style, len2 + 1, p.style);
		bottles = p.bottles;
		return *this;

	}
}
Port& Port::operator+=(int b)
{
	bottles = bottles + b;
	return *this;
}
Port& Port::operator-=(int b)
{
	bottles = bottles - b;
	return *this;
}

void Port::Show()const
{
	cout << "Brand:" << brand <<endl;
	cout << "Kind:" << style << endl;
	cout << "Bottles:" << bottles << endl;
}

VintagePort::VintagePort()
{

	const char* n = "No name";
	int len = strlen(n);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, n);
	year = 0;

}
VintagePort::VintagePort(const char* br, int b,const char * st, const char* nm, int y):Port(br,st,b)
{
	year = y;
	int len = strlen(nm);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, nm);
}
VintagePort::VintagePort(const VintagePort& vp)
{
	int len = strlen(vp.nickname);
	year = vp.year;
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, vp.nickname);
}
VintagePort & VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;
	else
	{
		int len = strlen(vp.nickname);
		nickname = new char[len + 1];
		strcpy_s(nickname, len + 1, vp.nickname);
		year = vp.year;
		return *this;
	}
}

void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname:" << nickname << endl;
	cout << "Year:" << year << endl;
}
