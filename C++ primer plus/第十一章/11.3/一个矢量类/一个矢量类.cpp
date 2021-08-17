﻿#include<iostream>
#include<cmath>
#include"Vector.h"
using namespace std;
namespace VECTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

	void Vector::set_mag()
	{
		mag1 = sqrt(x * x + y * y);
	}
	
	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(x, y);
	}
	void Vector::set_x()
	{
		x = mag1 * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag1 * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag1 = ang = 0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag1 = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd agument to Vector()--";
			cout << "vector set to 0\n";
			x = y = mag1 = ang = 0.0;
			mode = RECT;
		}
	}
	
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag1 = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd agument to Vector()--";
			cout << "vector set to 0\n";
			x = y = mag1 = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
		
	}
	void Vector::polar_mode()
	{
		mode = POL;
	}
	void Vector::rest_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector& b)const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector:: operator +(double n)const
	{
		return Vector(x + n, y + n);
	}
	Vector Vector::operator -(const Vector& b)const
	{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator- ()const
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator-(double n)const
	{
		return Vector(x - n, y - n);
	}
	Vector Vector::operator*(double n)const
	{
		return Vector(n * x, n * y);
	}
	double Vector::operator * (const Vector& b)const
	{
		return (x * b.x + y * b.y);
	}
	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}
	ostream& operator <<(ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y)=(" << v.x << "," << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a)=(" << v.mag1 << ","
				<< v.ang * Rad_to_deg << ")";
		}
		else
			os << "Vector object mode is invalid";
		return os;
	}

	
}