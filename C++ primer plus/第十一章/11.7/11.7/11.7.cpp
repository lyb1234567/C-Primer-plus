#include"complex.h"
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

Complex::Complex()
{
	a = b = 0.0;
}
Complex::Complex(double a_, double b_)
{
	a = a_;
	b = b_;
}
Complex::~Complex()
{

}
Complex operator +(const Complex& c1, const Complex& c2)
{
	Complex sum;
	sum.a = c1.a + c2.a;
	sum.b = c1.b + c2.b;
	return sum;
}
Complex operator -(const  Complex& c1, const Complex& c2)
{
	return Complex(c1.a - c2.a, c1.b - c2.b);
}
Complex operator *(const Complex& c1, const Complex& c2)
{ 
	Complex multi;
	multi.a = c1.a * c2.a  -c1.b * c2.b;
	multi.b = c1.a * c2.b + c1.b * c2.a;
	return multi;
}
Complex operator /(const Complex& c1, const Complex& c2)
{
	Complex div;
	div.a = (c1.a * c2.a - c1.b * c2.b) / (pow(c2.a, 2) + pow(c2.b, 2));
	div.b= c1.a * c2.b + c1.b + c2.a/ (pow(c2.a, 2) + pow(c2.b, 2));
	return div;
}
Complex operator *(double x, const Complex& c)
{
	return Complex(x * c.a, x * c.b);
 }
Complex operator /(double x, const Complex& c)
{
	Complex div;
	div.a = c.a / (pow(c.a, 2) + pow(c.b, 2));
	div.b=-(c.b)/ (pow(c.a, 2) + pow(c.b, 2));
	return div;
 }
Complex Complex:: operator *(double x) const
{
	return Complex(a * x, b * x);
}
Complex Complex::operator /(double x) const
{
	return Complex(a / x, b / x);
}
Complex Complex::operator~()const
{
	return Complex(a, -b);
}
ostream& operator<<(ostream& os, const Complex&c)
{
	os << "(" << c.a << "," << c.b << "i)";
	return os;
}
