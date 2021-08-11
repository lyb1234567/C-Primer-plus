#ifndef NS_H_
#define NS_H_
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setsales(Sales& s, const double ar[], int n);
	void setsales(Sales& s);
	void showsales(const Sales& s);
};
#endif // !NS_H_

#pragma once
