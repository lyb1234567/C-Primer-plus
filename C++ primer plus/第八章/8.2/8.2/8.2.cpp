#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
struct CandyBar
{
	char brand[40];
	double weight;
	int cal;
};
void set(CandyBar& candy_bar, const char* brand = "Millenium Munch", double a = 2.85, int n = 350);
void Show(const CandyBar& candy_bar);
int main()
{
	CandyBar candy_bar;
	set(candy_bar,"Jack");
	Show(candy_bar);
	return 0;
}

void set(CandyBar &candy_bar, const char* brand , double a , int n )
{
	strcpy_s(candy_bar.brand, brand);
	candy_bar.weight = a;
	candy_bar.cal = n;
}
void Show(const CandyBar& candy_bar)
{
	cout << "Brand:" << candy_bar.brand << endl;
	cout << "Weight:" << candy_bar.weight << endl;
	cout << "Calorie:" << candy_bar.cal;
}