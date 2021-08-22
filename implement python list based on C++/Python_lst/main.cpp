#include"list.h"
#include"Link_list.h"
#include<iostream>
#include<string>
#include <cstddef>
using namespace std;
int main() {
    Link_list a;
    a.push_tail(3);
    a.push_tail(5);
    a.push_tail(4);
    a.push_tail("s");
    a.reverse();
    a.print_list();
}