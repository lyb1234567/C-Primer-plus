#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Pizza
{
	string name;
	double weight;
	double d;
};
int main()
{
	Pizza* pizza = new Pizza;
	cout << "Enter the diametr:";
	cin >> pizza->d;
	cin.get();
	cout << "Enter the name:";
	getline(cin, pizza->name);
	cout << "Enter the weight:";
	cin >> pizza->weight;
	cout << "\n";
	cout << "Name:" << pizza->name << endl;
	cout << "Weight:" << pizza->weight << endl;
	cout << "Diameter:" << pizza->d << endl;
	delete pizza;
	return 0;
}