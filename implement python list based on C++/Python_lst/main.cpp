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
    a.append("s");
    cout << a.max();
    return 0;
}