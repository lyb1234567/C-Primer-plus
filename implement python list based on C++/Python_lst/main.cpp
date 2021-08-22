#include"list.h"
#include"Link_list.h"
#include<iostream>
#include<string>
#include <cstddef>
using namespace std;
int main() {
    list a("sbcsad");
    a.append(3);
    a.remove("d");
    cout << a;
    return 0;
}