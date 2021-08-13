#include<iostream>
#include"golf.h"
#include<string>
#include<cctype>
using namespace std;
int main()
{
	Golf golf;
	Golf golf2=golf.setgolf("Hello,Yanb", 40);
	golf.showgolf();
	return 0;
}