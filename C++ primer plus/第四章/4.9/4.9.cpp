#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	double cal;
};
int main()
{
	CandyBar *snack = new CandyBar[3];
	snack[0] = { "ABC",2.1,5.7 };
	snack[1] = { "Jack Chou",5.6,10.2 };
	snack[2] = { "Jack Ma",6.7,8.1 };
	cout << "snack 1:" << endl;
	cout << "Name:" << snack[0].brand << endl;
	cout << "Weight:" << snack[0].weight << endl;
	cout << "Calorie:" << snack[0].cal << endl;
	cout << "\n";
	cout << "snack 2:" << endl;
	cout << "Name:" << snack[1].brand << endl;
	cout << "Weight:" << snack[1].weight << endl;
	cout << "Calorie:" << snack[1].cal << endl;
	cout << '\n';
	cout << "snack 3:" << endl;
	cout << "Name:" << snack[2].brand << endl;
	cout << "Weight:" << snack[2].weight << endl;
	cout << "Calorie:" << snack[2].cal << endl;
	return 0;
}
