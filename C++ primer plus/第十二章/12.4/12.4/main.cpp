#include<iostream>
#include<string>
#include"stack.h"
using namespace std;
int main()
{
	Stack s;
	Item it[20] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		it[i] = i + 1;
		s.push(it[i]);
	}
	cout << s;
	//Stack s1(s);
	//cout << "s1=" << s1;
	//Stack s2 = s;
	//cout << s;
}