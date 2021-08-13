#ifndef SALES_H_
#define SALES_H_
//头文件
namespace SALES//名称空间
{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double* ar, const int n);
        void setsales();
        void showSales() const;
    };
}

#endif

