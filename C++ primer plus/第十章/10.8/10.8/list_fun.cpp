#include"list.h"
#include<iostream>
#include<string>
using namespace std;
bool List::isempty() const
{
    return (top_str == 0 and top_ch == 0 and top_item == 0);
}

bool List::isfull() const
{
    return (top_str == MAX and top_item == MAX and top_ch == MAX);
}

bool List::add(const Item item)
{
    if (top_item < MAX)
    {
        items[top_item++] = item;
        return true;
    }
    else
        return false;
}
bool List::add(const string str)
{
    if (top_str < MAX)
    {
        strs[top_str++] = str;
        return true;
    }
    else
        return false;
}
bool List::add(const char ch)
{
    if (top_ch < MAX)
    {
        chs[top_ch++] = ch;
        return true;
    }
    else
        return false;
}
void List::visit(void(*pf)(Item& item))
{
    if (top_item == 0)
        cout << "The list of characters is empty!!!" << endl;
    else
        std::cout << "\nDisplay the item: \n";
        for (int i = 0; i < top_item; ++i)
            (*pf)(items[i]);
}
void List::visit(void(*pf)(string& str))
{
    if (top_str == 0)
        cout << "The list of strings is empty!!!" << endl;
    else
        std::cout << "\nDisplay strings: \n";
        for (int i = 0; i < top_str; ++i)
            (*pf)(strs[i]);
}
void List::visit(void(*pf)(char& ch))
{
    if (top_ch == 0)
        cout << "The list of characters is empty!!!" << endl;
    else
        std::cout << "\nDisplay characters: \n";
        for (int i = 0; i < top_ch; ++i)
            (*pf)(chs[i]);
}
