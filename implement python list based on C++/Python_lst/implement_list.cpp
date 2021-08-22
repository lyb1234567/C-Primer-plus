#include"list.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
list::list()
{
	
}
list::list(  string str)
{
	lst.str_list(str);
}
void list:: append(double n)
{
	lst.push_tail(n);
}
void list::append(string s1)
{
	lst.push_tail(s1);
}
void list::remove(double n)
{
	lst.remove(n);
}
void list::remove(string s1)
{
	lst.remove(s1);
}
list list::operator+(double n) 
{
	lst.add_number(n);
	return *this;
}
list list::operator-(double n)
{
	lst.minus_number(n);
	return *this;
}
list operator +(double n, list& lst1)
{
	return lst1 + n;
}
list operator-(double n,  list& lst1)
{
	return lst1-n;
}
ostream& operator <<(ostream& os,   list& lst1)
{
	lst1.lst.print_list();
	return os;
 }
list operator+( list& l1, list &l2) 
{
	l1.lst.merge(l2.lst);
	return l1;
}

int list::operator[](int index)
{
	
	return lst.find_nth(index + 1);
	
}
//list list::operator[](const char * str)
//{
//	cout << p << endl;
//	int slice= stoi(str);
//	list sum;
//	if (mode == list::DOUBLE)
//	{
//		for (int j = slice; j < len(); j++)
//		{
//			sum.append(lst[j]);
//		}
//	}
//	else if(mode == list::STR)
//	{
//		for (int j = slice; j < len(); j++)
//		{
//			sum.append(s[j]);
//		}
//	}
//	return sum;
//}