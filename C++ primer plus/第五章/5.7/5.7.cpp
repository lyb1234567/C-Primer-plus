#include<iostream>
#include<string>
using namespace std;
struct Car 
{
	string maker;
	int year;
};
int main()
{
	int number;
	cout << "How many cars do you wish to catalog:";
	cin >> number;
	Car* car = new Car[number];
	for (int i = 0; i < number; i++)
	{
		cout << "Car #" << i+1<< endl;
		cout << "Please enter the make:";
		getline(cin, car[i].maker);
		cout << "Please enter the year made:";
		cin >> car[i].year;
		cin.get();
		cout << endl;
	}
	cout << "Here is your collection:";
	cout << endl;
	for (int i = 0; i < number; i++)
	{
		cout<<car[i].year<< " " << car[i].maker;
		cout << endl;
	}
	return 0;

}