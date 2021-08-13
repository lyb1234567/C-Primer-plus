#include <iostream>
#include <cctype>
#include"customer.h"
using namespace std;
int main()
{
	Stack st;
	double payment;
	Item po[10] = {{ "abc",120 }, { "asdc",247 },{ "asdc",237 }, { "asdc",147 },{ "asdc",2557 },{ "asdc",147 },{ "asdc",347 },{ "asdc",241 },{ "asdc",246 },{ "asdc",547 } };
	for (int i = 0; i < 10; i++)
	{
		st.push(po[i]);
	}
	for (int j = 0; j < 5; j++)
	{
		st.pop(po[j]);
	}
	return 0;
}