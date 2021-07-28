#include<iostream>
using namespace std;
int main()
{
	char choice;
	cout << "Enter one of the following choices:" << endl;
	cout << "c) carnivore\t\t\t\t\t\t p)pianist" << endl;
	cout << "q) tree\t\t\t\t\t\t\t g)game" << endl;
	cout << "f" << endl;
	do
	{
		cout << "Please enter a c,p,t or g:";
		cin >> choice;
		switch (choice)
		{
		case 'c':
			cout << "A maple is carnivore" << endl;
			break;
		case 'p':
			cout << "A maple is pianist" << endl;
			break;
		case't':
			cout << "A maple is tree" << endl;
			break;
		case'g':
			cout << "A maple is game" << endl;
			break;
		default:
			break;
		}
	} while (choice != 'q');
		return 0;
}