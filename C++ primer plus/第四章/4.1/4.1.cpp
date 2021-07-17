#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char first[20];
	char last[20];
	char grade;
	int age;
	cout << "What is your first name:";
	cin.getline(first, sizeof(first));
	cout << first << endl;
	cout << "What is your last name:";
	cin.getline(last, sizeof(last));
	cout << last << endl;
	cout << "What grade do yo deserve:";
	cin >> grade;
	cin.get();
	cout << "What is your age:";
	cin >> age;
	cout << "Name:" << last << ", " << first << endl;
	cout << "Grade:" << grade << endl;
	cout << "Age:" << age;
	return 0;

}