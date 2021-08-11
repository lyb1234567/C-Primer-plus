#include<iostream>
using namespace std;
int main()
{
    const char* name = "sadas";
	cout << name << endl;
	
	while (*name)
	{
		cout << *name << endl;
		name++;
	}
	return 0;
}