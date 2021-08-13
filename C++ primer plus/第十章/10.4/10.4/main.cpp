#include <iostream>
#include "SALES.h"
//主程序
int main()
{
    int n;
    std::cout << "Please enter n items:";
    std::cin >> n;//输入数据
    double a[n];
    std::cout << "Enter numbers: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    SALES::Sales s(a, n);
    s.showSales();
    s.setsales();
    s.showSales();

    return 0;
}
