#ifndef Complex_H_
#define Complex_H_
#include<iostream>
#include<string>
using namespace std;
class Complex
{
private:
	double a;
	double b;
public:
	Complex();
	~Complex();
	Complex(double a_, double b_);
	friend Complex operator + (const Complex& c1, const Complex& c2);
	friend Complex operator -(const Complex& c1, const Complex& c2);
	friend Complex operator *(const Complex& c1, const Complex& c3);
	friend Complex operator /(const Complex& c1, const Complex& c2);
	friend Complex operator *(double x, const Complex& c);
	friend Complex operator /(double x, const Complex& c);
	Complex operator *(double x) const;
	Complex operator /(double x) const;
	Complex operator ~() const;
	friend ostream& operator<<(ostream& os, const Complex&c);
	friend istream& operator>>(istream& input, Complex& c) {
		cout << "real:";
		if(!(input >> c.a))
			return input;
		cout << "imaginary:";
		input >> c.b;
		cout<<endl;
		return input;
	}

};
#endif // !Complex_H_

#pragma once
