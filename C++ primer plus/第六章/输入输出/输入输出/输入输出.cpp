﻿#include<iostream>
#include<fstream>
#include<cstdlib>
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter the name of data file:";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program teminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	cout << value << endl;
	while (inFile.good())
	{
		++count;
		sum = sum + value;
		inFile >> value;
		cout << value << endl;
	}
	if (inFile.eof())
	{
		cout << "End of file reached.\n";

	}
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for nuknown rason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Item read:" << count << endl;
		cout << "Sum:" << sum << endl;
		cout << "Average:" << sum / count << endl;
	}
	inFile.close();
	return 0;
}