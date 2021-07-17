#include<string>
#include<iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	string name;
	string dessert;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favourite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << "for you," << name << "\n";
	return 0;
}