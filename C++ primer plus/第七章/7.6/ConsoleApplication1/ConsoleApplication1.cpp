#include<iostream>
#include<string>
using namespace std;
int Fill_array(string name, int n);
int main()
{
	string name;
	int n;
	cout << "Enter the name of the array:";
	cin >> name;
	cout << "Enter the size of the array:";
	cin >> n;
	cout<<"The number of words: "<<Fill_array(name, n);
	return 0;
}
int Fill_array(string name, int n)
{
	double *arr = new double [n];
	int i = 0;
	cout << "Number # " << i + 1 << " :";
	while (cin >> arr[i] && i<n-1)
	{
		i++;
		cout << "Number # " << i + 1 << " :";

	}
	return i+1;

}