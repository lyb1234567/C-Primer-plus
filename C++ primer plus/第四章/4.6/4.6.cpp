#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct CandyBar 
{
	string brand;
	double weight;
	int cal;
};
int main()
{
	CandyBar snack[3];
	snack[0] = { "Jack",2.3,12 };
	snack[1] = { "Mark",2.4,16 };
	snack[2] = { "Ma",2.5,19 };
	cout << "Snack 1:" << endl;
	cout << "Brand:" << snack[0].brand << endl;
	cout << "Weight:" << snack[0].weight << endl;
	cout << "Calorie:" << snack[0].cal << endl;
	cout << "\n";
	cout << "Snack 2:" << endl;
	cout << "Brand:" << snack[1].brand << endl;
	cout << "Weight:" << snack[1].weight << endl;
	cout << "Calorie:" << snack[1].cal << endl;
	cout << "\n";
	cout << "Snack 3:" << endl;
	cout << "Brand:" << snack[2].brand << endl;
	cout << "Weight:" << snack[2].weight << endl;
	cout << "Calorie:" << snack[2].cal << endl;
	return 0;
}
