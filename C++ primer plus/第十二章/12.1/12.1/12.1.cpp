#include"Cow.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
Cow::Cow()
{
	const char *str = "Cow";
	const char* hb = "Hobby";
	int len1;
	int len2;
	len1 = strlen(str);
	len2 = strlen(hb);
	hobby = new char[len2 + 1];
	strcpy_s(name,len1+1,str);
	strcpy_s(hobby, len2 + 1, hb);
	weight = 0.0;
}
Cow::Cow(const char* nm, const char* ho, double wt)
{
	int len1 = strlen(nm);
	int len2 = strlen(ho);
	hobby = new char[len2 + 1];
	strcpy_s(name, len1 + 1, nm);
	strcpy_s(hobby, len2 + 1, ho);
	weight = wt;
}
Cow::Cow(const Cow& c)
{
	weight = c.weight;
	int len1 = strlen(c.name);
	int len2 = strlen(c.hobby);
	hobby = new char[len2 + 1];
	strcpy_s(hobby, len2 + 1, c.hobby);
	strcpy_s(name, len1 + 1, c.name);
}
Cow::~Cow()
{
	cout << "Delete a Cow object" << endl;
	delete[] hobby;
}
Cow& Cow::operator =(const Cow& c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	int len1 = strlen(c.name);
	int len2 = strlen(c.hobby);
	hobby = new char[len2 + 1];
	strcpy_s(hobby, len2 + 1, c.hobby);
	strcpy_s(name, len1 + 1, c.name);
	return *this;

}
void Cow::ShowCow()const
{
	cout << "Hobby:" << hobby << endl;
	cout << "Name:" << name << endl;
	cout << "Weight:" << weight << endl;
}