#include"list.h"
#include<iostream>
#include<string>
using namespace std;
list::list()
{
	i = 0;
}
void list:: append(double n)
{
	lst[i] = n;
	i++;
}
void list::append(const list& lst1)
{
	int j = 0;
	int len1 = len();
	int len2 = lst1.i + 1;
	for (int a=0;int k = len1; k < len1+len2 and a<len2)
	{
		lst[k] = lst1.lst[a];
	}
}
int list::len()
{
	return i ;
}
void list::remove(double n)
{
	int count = -1;
	int l = len();
	int j = 0;
	while (lst[j] != n and j<l)
	{
		j++;
	}
	count = j;
	if (count == -1)
	{
		cout << "ValueError: list.remove(x): x not in list" << endl;
	}
	else
		for (int j = count; j < len(); j++)
		{
			lst[j] = lst[j + 1];
		}
	    i = i - 1;
}
bool list::isempty()
{
	return (i == 0);
}
bool list::isfull()
{
	return (i == MAX);
}
list list::operator+(double n) 
{
	for (int j = 0; j < len(); j++)
	{
		lst[j] = lst[j] + n;
	}
	return *this;
}
list operator +(const list& lst1)
{
	list sum;
	sum.append(lst1);
	return sum;
}
list operator +(double n, list& lst1)
{
	return lst1 + n;
}
list list::operator-(double n)
{
	for (int j = 0; j < len(); j++)
	{
		lst[j] = lst[j] - n;
	}
	return *this;

}
list operator-(double n,  list& lst1)
{
	return lst1-n;
}
ostream& operator <<(ostream& os,  list& lst1)
{
	if (lst1.len() == 0)
		os << "[]" << endl;
	else if(lst1.len()!=0)
		os << "[";
		for (int j = 0; j < lst1.len(); j++)
		{
			if (j == 0)
				os << lst1.lst[j];
			else
				os << "," << lst1.lst[j];
		}
		os << "]";
	return os;
 }
int list::operator[](int index)
{
	if (index > MAX)
	{
		cout << "Out of range" << endl;
		// 返回第一个元素
		return lst[0];
	}
	return lst[index];
}