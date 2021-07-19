#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of rows:";
	cin >> n;
	for (int i=0;i<n;i++)
		{
			for (int k = 0; k < (n - i - 1); k++)
			{
				cout<<".";
			}
	        for(int b=0;b<i+1;b++)
				cout<<"*";
			cout<<endl;
		}
		return 0;
}