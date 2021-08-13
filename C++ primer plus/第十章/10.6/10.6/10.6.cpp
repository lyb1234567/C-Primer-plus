#include "Move.h"
#include<iostream>
#include<string>
using namespace std;
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove()const
{
	cout << "X:" << x << endl;
	cout << "Y:" << y << endl;
}
Move Move::add(const Move& m)const
{
	Move a(x + m.x, y + m.y);
	return a;
}
void Move::reset(double a , double b )
{
	x = a;
	y = b;
}