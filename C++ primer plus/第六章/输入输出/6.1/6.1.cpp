#include<iostream>
#include<cctype>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	char ch;
	char input[100];
	int i = 0;
	cout << "Enter the character:";
	cin >> ch;
	while (ch != '@')
	{
		if (ch == ' ')
			continue;
		else if(ch!=' ')
			input[i] = ch;
		i = i + 1;
		cin >> ch;
	}
	cout << i;
	cout << endl;
	for (int j = 0; j < i; j++)
	{
		if (isdigit(input[j]))
		{
			continue;
		}
		if (isupper(input[j]))
		{
			cout << (char)tolower(input[j]);
		}
		else if (islower(input[j]))
		{
			cout << (char)toupper(input[j]);
		}

	}
	return 0;
}