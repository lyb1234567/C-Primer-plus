#include <iostream>
#include <string>
#include <cctype>
#include "List.h"
//主程序
void func1(Item& item);//函数声明
void func2(string& strs);//函数声明
void func3(char& chs);//函数声明
int main()
{
    using namespace std;
    List st;
    string str;
    cout << "At first: " << endl;
    if (st.isempty() == 1)
        str = "Yes!";
    if (st.isempty() == 0)
        str = "No!";
    cout << "isEmpty? " << str << endl;
    if (st.isfull() == 1)
        str = "Yes!";
    if (st.isfull() == 0)
        str = "No!";
    cout << "isFull? " << str << endl;
    st.add(1);
    st.add(2);
    st.add(3);
    st.add(4);
    st.add("sb");
    st.add("idiot");
    cout << "\nNow: " << endl;
    if (st.isempty() == 1)
        str = "Yes!";
    if (st.isempty() == 0)
        str = "No!";
    cout << "isEmpty? " << str << endl;
    if (st.isfull() == 1)
        str = "Yes!";
    if (st.isfull() == 0)
        str = "No!";
    cout << "isFull? " << str << endl;
    void(*pf1)(Item & item);
    void(*pf2)(string & str);
    void(*pf3)(char& ch);
    pf1 = func1;
    pf2 = func2;
    pf3 = func3;
    st.visit(pf1);
    st.visit(pf2);
    st.visit(pf3);
    system("PAUSE");
    return 0;
}

void func1(Item& item)
{
    std::cout << item << std::endl;
}
void func2(string& str)
{
    std::cout << str << std::endl;
}
void func3(char& ch)
{
    std::cout << ch << std::endl;
}

