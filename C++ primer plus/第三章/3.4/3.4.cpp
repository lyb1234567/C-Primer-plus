#include<iostream>
using namespace std;
int main()
{
	const int scalor1 = 86400;
	const int scalor2 = 3600;
	const int scalor3 = 60;
	int sec;
	cout << "Enter the number of seconds:";
	cin >> sec;
	int a = sec;
	int days;
	int hours;
	int mins;
	int secs;
	days = sec / scalor1;
	sec = sec - (days * scalor1);
	hours = sec / scalor2;
	sec = sec - (hours * scalor2);
	mins = sec / scalor3;
	sec = sec - (mins * scalor3);
	cout << a << " seconds =" << days << " days" << "," << hours << " hours" << "," << mins << " minutes" << "," << sec << " seconds";
	return 0;

}
