#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
using namespace std;
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode {RECT,POL};
	private:
		double x;
		double y;
		Mode mode;
		double set_mag();
		double set_ang();
		void set_x(double mag,double ang);
		void set_y(double mag,double ang);
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form);
		~Vector();
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const {
			double mag;
			mag = sqrt(x * x + y * y);
			return mag;
		}
		double angval()const { 
			double ang;
			if (x == 0 && y == 0)
				ang = 0.0;
			else
				ang = atan2(y, x);
			return ang;
		}
		void polar_mode();
		void rest_mode();
		Vector operator +(const Vector& b)const;
		Vector operator +(double n)const;
		Vector operator -(const Vector& b)const;
		Vector operator -(double n)const;
		Vector operator -()const;
		Vector operator *(double n) const;
		double operator *(const Vector& b) const;
		friend Vector operator *(double n, const Vector& a);
		friend ostream& operator<<(ostream& os, const Vector& v);
	};
}
#endif
#pragma once
