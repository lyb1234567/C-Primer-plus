#include<iostream>
int a = 7;
namespace ns1
{
	double j;
	int i;
	namespace ns2{
		double a = 3;
	}
};
int main()
{
	int a = 4;
	using namespace std;
	using namespace ns1;
	cout << "local a:" << a << endl;
	cout << " a of Namespace 2:" << ns2::a<< endl;
	cout << "Global a:" << ::a;
	return 0;

}