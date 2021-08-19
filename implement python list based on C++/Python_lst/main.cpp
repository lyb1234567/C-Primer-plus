#include"list.h"
#include<iostream>
#include<string>
using namespace std;
int  test(int & n)
{
	return n;
}
int main()
{
	double n;
	//list a;
	//cout << "Add an element to the list q to quit:";
	//while (cin >> n)
	//{
	//	a.append(n);
	//	cout << "Add an element to the list q to quit:";

	//}
	//cout << "The final list will be:" << a << endl;
	//a.sort();
	//cout << "After sorted:" << a << endl;
	//cout << "Slice [1:]:";
	//list d = a["1:"];
	//cout << d << endl;
	list g;
	g.append(1);
	g.append(2);
	g.append("s");
	g.append(3);
	cout << g;
	return 0;

}