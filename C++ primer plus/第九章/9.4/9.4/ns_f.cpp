#include<iostream>
#include"ns.h"
namespace SALES
{
	void setsales(Sales& s, const double ar[], int n = QUARTERS)
    {
        double sum = 0;
        s.max = -99999999;
        s.min = 99999999;
        for (int i = 0; i < n + 1; ++i)
        {
            s.sales[i] = ar[i];
            sum += s.sales[i];
            s.max = ar[i] > s.max ? ar[i] : s.max;
            s.min = ar[i] < s.min ? ar[i] : s.min;
        }
        s.average = sum / n;
    }
    void setsales(Sales& s)
    {
        s.max = -99999999;
        s.min = 99999999;
        std::cout << "please input the array size: ";
        int sum = 0;
        int n;
        std::cin >> n;
        std::cout << "please input the data: ";
        for (int i = 0; i < n; ++i)
            std::cin >> s.sales[i],
            sum += s.sales[i];
        for (int i = 0; i < n; ++i) {
            s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
            s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
        }
        s.average = sum / n;
    }
    void showsales(const Sales& s)
    {
        std::cout << "*****the info*****\n";
        std::cout << "the sales:" << std::endl;
        for (int i = 0; i<(sizeof(s.sales)/sizeof(s.sales[0])); ++i)
            std::cout << s.sales[i] << "\t\n";
        std::cout << "the average: " << s.average << "\n";
        std::cout << "the min: " << s.min << "\n";
        std::cout << "the max: " << s.max << "\n";
    }

}