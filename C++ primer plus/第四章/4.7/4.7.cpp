#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Pizza
{
	string name;
	double d;
	double weight;

};
int main()
{
	Pizza pizza;
	cout << "Enter the name of company:";
	getline(cin, pizza.name);
	cout << "Enter the diameter:";
	cin >> pizza.d;
	cout << "Enter the weight:";
	cin >> pizza.weight;
	cout << "\n";
	cout << "Name:" << pizza.name << endl;
	cout << "Weight:" << pizza.weight << endl;
	cout << "Diameter:" << pizza.d << endl;
	return 0;
}