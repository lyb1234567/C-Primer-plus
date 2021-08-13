#include <iostream>
#include "SALES.h"
//类的实现
SALES::Sales::Sales()//注意这是在名称空间里的类的函数，后面也是
{
    for (int i = 0; i < QUARTERS; i++)
        sales[i] = 0;
    average = 0;
    max = 0;
    min = 0;
}

SALES::Sales::Sales(const double* ar, const int n)
{
    //计算和存储数组
    double a, b, c;
    a = b = ar[0];
    c = 0.0;
    for (int i = 0; i < n; i++)
    {
        sales[i] = ar[i];
        c += ar[i];
        if (ar[i] < a)
            a = ar[i];
        if (ar[i] > b)
            b = ar[i];
    }
    average = c / n;
    max = b;
    min = a;
}

void SALES::Sales::setsales()
{

    double ar[QUARTERS] = { 0,0,0,0 };
    std::cout << "Please enter 4 number:" << std::endl;
    int n = 0;
    do {
        std::cin >> ar[n];
        n++;
    } while ((n < QUARTERS));


    double a, b, c;
    a = b = ar[0];
    c = 0.0;
    for (int i = 0; i < n; i++)
    {
        sales[i] = ar[i];
        c += ar[i];
        if (ar[i] < a)
            a = ar[i];
        if (ar[i] > b)
            b = ar[i];
    }
    average = c / n;
    max = b;
    min = a;
}

void SALES::Sales::showSales() const
{
    //显示结构数据
    for (int i = 0; i < QUARTERS; i++)
        std::cout << sales[i] << " ";
    std::cout << "\nThe average is: " << average << "  The max is: "
        << max << "  The min is: " << min << std::endl;
}
