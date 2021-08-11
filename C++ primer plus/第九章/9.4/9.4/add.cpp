#include<iostream>
#include<string>
#include"ns.h"

int main()
{
    double a[4] = { 1,2,3,4 };
    SALES::Sales s1;
    SALES::Sales s2;
    SALES::setsales(s1, a, 3);
    SALES::showsales(s1);
    SALES::setsales(s2);
    SALES::showsales(s2);
    system("pause");
    return 0;
}