#include<iostream>
using namespace std;
int num1(int);
int num2(int);
int num3(int);
void estimate(int ,int(*pt)(int));
int main()
{
	int (*pt)(int) = num1;
	cout << (*pt)(3) << endl;

	int (*pb[3])(int) = { num1,num2,num3 };
	cout << pb[2](3) << endl;
	auto pc = &pb;
	cout <<(*pc)[1](3);
	return 0;
}
int num1(int a)
{
	return a * 3;
}
int num2(int b)
{
	return b * 4;
}
int num3(int c)
{
	return c * 5;
}
void estimate(int a,int(*pt)(int))
{
	cout << "The use function value is:" << (*pt)(a);
}
