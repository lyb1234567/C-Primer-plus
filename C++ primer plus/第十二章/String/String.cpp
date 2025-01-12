﻿#include"string.h"
#include<iostream>
#include<cstring>
using namespace std;

int String::num_strings = 0;
int String::HowMany()
{
	return num_strings;
}
String::String(const  char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
}
String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return *this;
	}
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}
String& String::operator=(const char *s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}
char& String::operator[](int i)
{
	return str[i];
}
const char& String::operator[](int i)const
{
	return str[i];
}
bool operator<(const String& st1, const String& st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String& st1, const String& st2)
{
	return st1 < st2;
}
bool operator==(const String& st1, const String& st2)
{
	return(strcmp(st1.str, st2.str) == 0);
}
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}
istream & operator>>(istream & is,String &st)
{
	char temp[80];
	is.get(temp, 80);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

