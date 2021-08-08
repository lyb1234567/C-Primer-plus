#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void convert(string& str);
int main()
{
	string str;
	cout << "Enter a string(q to quit):";
	getline(cin, str);
	while (str != "q")
	{
		convert(str);
		cout << "Next String(q to quit):";
		getline(cin, str);
	}
	cout << "Bye!";
	return 0;
}
void convert(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
}
