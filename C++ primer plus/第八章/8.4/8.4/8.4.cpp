#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct stringy {
	char* str;
	int ct;
};
void set(stringy& beny,const char * str);
void show(stringy&beny, int n = 1);
void show(const char* name, int n = 1);
int main()
{
	stringy beny;
	char testing[] = "Reality isn't what it used to be.";
	set(beny, testing);
	show(beny);
	show(beny, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy& beny, const char* str)
{
	beny.ct = strlen(str);
	beny.str = new char[beny.ct+1];
	strcpy_s(beny.str,beny.ct+1,str);
	
}
void show(stringy& beny, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << beny.str << endl;
	}
	cout << endl;
		
}
void show(const char* name, int n )
{
	for (int i = 0; i < n; i++)
	{
		cout << name << endl;
	}
	cout << endl;
}