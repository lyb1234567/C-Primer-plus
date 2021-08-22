#include"list.h"
#include"Link_list.h"
#include<iostream>
#include<string>
#include <cstddef>
using namespace std;
int main() {
    list a;
    a.append(1);
    a.append(10);
    a.append(12);
    list c = a["3:"];
    cout << c;
    return 0;
}