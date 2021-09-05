#include"tennis.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mike", "Duck", true);
	rplayer1.Name();
	cout << rplayer1.HasTable();
}