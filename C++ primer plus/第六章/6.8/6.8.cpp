#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	ifstream inFile;
	string filename;
	cout << "Enter the name of the file:";
	getline(cin, filename);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file";
		exit(EXIT_FAILURE);
	}
	char ch;
	int count = 0;
	inFile >> ch;
	while (inFile.good())
	{
		count++;
		inFile >> ch;
		cout << ch << endl;
	}
	if (inFile.eof())
	{
		cout << "The file has" << count << " characters " << endl;
		cout << "Reach the end of the file";
	}
	return 0;
	
}