#ifndef list_H_
#define list_H_
#include<string>
#include<iostream>
using namespace std;
typedef int Item;
class List
{
private:
    static const int MAX = 100;
    Item items[MAX];
    string strs[MAX];
    char chs[MAX];
    int top_str;
    int top_ch;
    int top_item;
public:
    List() { top_str = 0; top_ch = 0; top_item = 0; }
    List(int);
    bool add(const Item item);
    bool add(const string str);
    bool add(const char ch);
    bool isempty() const;
    bool isfull() const;
    void visit(void(*pf)(Item& item));
    void visit(void(*pf)(string& str));
    void visit(void(*pf)(char& ch));
};
#endif // !list_H_

#pragma once
