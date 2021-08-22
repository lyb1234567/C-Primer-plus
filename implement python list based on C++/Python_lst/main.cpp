#include"list.h"
#include"Link_list.h"
#include<iostream>
#include<string>
#include <cstddef>
using namespace std;
int main() {
    list a;
    a.append(3);
    a.append(4);
    cout << a.min();
    return 0;
}