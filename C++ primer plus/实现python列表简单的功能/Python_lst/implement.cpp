#include"list.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
list::list()
{
	i = 0;
	p = 0;
	mode = DOUBLE;
}
list::list(const string& str)
{
	mode = STR;
	for (int j = 0; j < str.length(); j++)
	{
		s[j] = str[j];
	}
	p = str.length();
}
void list:: append(double n)
{
	lst[i] = n;
	i++;
}
void list::append( list& lst1)
{
	int j = 0;
	int len1 = len();
	int len2 = lst1.len();
	for (int a=0;int k = len1; k < len1+len2 and a<len2)
	{
		lst[k] = lst1.lst[a];
	}
}
int list::len()
{
	if (mode == DOUBLE)
		return i;
	else if (mode == STR)
		return p;
}
void list::sort()
{
	mode = DOUBLE;
	double temp;
	for (int j = 0; j < len(); j++)
	{
		for (int k = j+1; k < len(); k++)
		{
			if (lst[j] > lst[k])
			{
				temp = lst[j];
				lst[j] = lst[k];
				lst[k] = temp;
			}
		}
	}
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
double list::max()
{
	sort();
	return lst[len() - 1];
}
double list::min()
{
	sort();
	return lst[0];
}
void list::append(string s1)
{
	s[p] = s1;
	p++;
}
void list::remove(string s1)
{
	int count = -1;
	int l = len();
	int j = 0;
	while (s[j]!=s1 and j < l)
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
			s[j] = s[j + 1];
		}
	    p = p - 1;
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
	list sum;

	for (int j = 0; j < len(); j++)
	{
		lst[j] = lst[j] + n;
	}
	return *this;
}
list operator+(  list& l1,  list &l2) 
{
	list sum;
	for (int n = 0; n < (l1.len() + l2.len()); n++)
	{
		if (n >= l1.len())
			sum.append(l2.lst[n - l1.len()]);
		else
			sum.append( l1.lst[n]);		   
	}
	return sum;
}
void list::show()
{
	cout << "Length:" << len();
	for (int l = 0; i < len(); i++)
	{
		cout << "sb";
		cout << lst[i] << endl;
	}
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
ostream& operator <<(ostream& os,   list& lst1)
{
	if (lst1.mode==list::DOUBLE)
		if (lst1.len() == 0)
		{
			os << "[]" << endl;
			return os;
		}
		else
		{
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
	else if (lst1.mode == list::STR)
	{
		if (lst1.len() == 0)
		{
			os << "[]" << endl;
			return os;
		}
		else
		{
			os << "[";
			for (int j = 0; j < lst1.len(); j++)
			{
				if (j == 0)
					os << lst1.s[j];
				else
					os << "," << lst1.s[j];
			}
			os << "]";
			return os;
		}
	}
	
 }

template <class T>
T &list::operator[](int index)
{
	if (mode == DOUBLE)
	{
		if (index > len())
		{
			cout << "Out of range" << endl;
			// 返回第一个元素
			return lst[0];
		}
		return lst[index];
	}
	else if (mode==STR)
		{
		if (index > len())
		{
			cout << "Out of range" << endl;
			// 返回第一个元素
			return s[0];
		}
		return s[index];
		}

}