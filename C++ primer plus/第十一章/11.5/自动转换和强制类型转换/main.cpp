#include<iostream>
#include"stonewt.h"
using namespace std;
int main()
{
	Stonewt mycat;
	mycat = (Stonewt)19.6;
	Stonewt mycat2(20.1);
	cout << (mycat != mycat2);
	return 0;
	
}