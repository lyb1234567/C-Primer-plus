#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int cal;
};
int main()
{
	CandyBar snack = { "Moncha Munch",2.3,350 };
	cout << "Brand:" << snack.brand << endl;
	cout << "Weight:" << snack.weight << endl;
	cout << "Calorie:" << snack.cal << endl;
	return 0;
}
