#include<iostream>
using namespace std;
template <typename T>
void Swap(T& a, T& b);
float may(float a, float b= 3);
struct job {
	char name[40];
	double salary;
	int floor;
};
void may(int);
template <> void Swap<job>(job& j1, job& j2);
template void Swap<char>(char& a, char& b);
void Show(job& j1);
int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	job sue = { "Mike johnason",122.21,5 };
	job mik = { "Yanbo Liu",22.21,7 };
	char a = 'a';
	char b = 'b';
	may('B','A');
	//Swap(a, b);
	//cout << "a:" << a << endl;
	//cout << "b:" << b << endl;
	return 0;
}
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <>void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	cout << j.name << " :$" << j.salary << endl;
	cout << " on floor" << j.floor << endl;
}

void may(int a)
{
	cout << a;
}
float may(float a, float b)
{
	cout << a << endl;
	cout << b;
	return a;
}
