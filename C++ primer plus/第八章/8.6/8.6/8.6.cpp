#include<iostream>
using namespace std;
template <typename T>
T maxn(T a[], int n);
template <>const char* maxn( const char* arr[], int n);
int main()
{
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    double arr2[4] = { 1.1, 2.2, 3.3, 4.4 };
    const char* arr3[5] = { "a", "bbb", "cc", "dddd", "e" };
    int max1;
    double max2;
    const char* max3;
    max1 = maxn(arr1, 6);
    max2 = maxn(arr2, 4);
    max3 = maxn(arr3, 5);
    cout << "Biggest num of arr1: " << max1 << endl;
    cout << "Biggest num of arr2: " << max2 << endl;
    cout << "Longest address of arr3: " << &max3 << endl;

    return 0;
}

template<typename T>
T maxn(T a[], int n)
{
    T max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max <= a[i])
		{
            max = a[i];
		}
	}
	return max;
}
template <>const char* maxn(const char* arr[], int n)
{
    int max_len = 0;
    int j = 0;
    const char* address;
    for (int i = 0; i < n; i++)
    {
        if (strlen(arr[i]) > max_len)
        {
            max_len = strlen(arr[i]);
            j = i;
        }
    }
    address = arr[j];//字符串地址中最长的那个
    return address;

}

