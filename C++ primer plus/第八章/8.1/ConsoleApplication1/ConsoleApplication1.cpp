#include<iostream>
using namespace std;
void show(const char * str,int n=3);
int main()
{
	const char *name = "Mike";
	show(name,0);
	show(name, 3);
	show(name, 2);
	show(name, 2);
	show(name, 2);
}

void show(const char * str,int n)
{
	static int j = 0;
	if (!n)
	{
		cout << str;
	}
	if (n)
	{
		for (int i = 0; i <j; i++)
		{
			cout << str << " ";
		}
	}
	j = j + 1;
	cout << endl;
}