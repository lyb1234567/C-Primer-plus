#include<iostream>
using namespace std;
int main()
{
	const float scalor = 60;
	float degree;
	float min;
	float sec;
	cout << "Enter a latitude in degress,minutes and seconds:" << endl;
	cout << "First,enter the degress:";
	cin >> degree;
	cout << "Next,enter the minutes of arc:";
	cin >> min;
	cout << "Finally,enter the seconds of arc:";
	cin >> sec;
	float final = degree + ((sec / scalor + min) / scalor);
	cout << degree << " degrees" << ", " << min << " minutes," << sec << " seconds=" << final << "degrees";
	return 0;

}