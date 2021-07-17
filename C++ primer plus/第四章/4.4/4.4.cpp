#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string first;
	string last;
	cout << "Enter your first name:";
	getline(cin, first);
	cout << "Enter your last name:";
	getline(cin, last);
	cout << "Here's the infroamtion in a single string:" << last << ", " << first;
	return 0;
}
