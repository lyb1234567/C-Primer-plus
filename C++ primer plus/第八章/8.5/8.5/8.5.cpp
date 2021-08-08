#include<iostream>
using namespace std;
template <typename T>
T max5(T a[5]);
int main()
{
	int a[6] = { 1,2,6,4,5 };
	double e[6] = { 1,2,6.3,4,5 };
	cout << max5(e);
	return 0;
}

template <typename T>
T max5(T a[5])
{
	T max;
	max = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}
