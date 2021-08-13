
#include"Betelg.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
Pl::Pl(const char* n, int ci)
{
	strcpy_s(plorg,strlen(n)+1, n);
	CI = ci;
}
void Pl::ci(int&c)
{
	CI = c;
}
void Pl::show()const
{
	cout << "CI:" << CI << endl;
	cout << "Name:" << plorg << endl;
	cout << endl;
}