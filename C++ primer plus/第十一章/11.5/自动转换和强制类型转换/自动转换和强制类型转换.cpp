#include "stonewt.h"
#include<iostream>
using namespace std;
Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt()
{

}
bool operator >=(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds >= s2.pounds;
}
bool operator ==(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds == s2.pounds;
}
bool operator <=(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds <= s2.pounds;
}
bool operator >(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds > s2.pounds;
}
bool operator !=(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds != s2.pounds;
}
bool operator <(const Stonewt s1, const Stonewt s2)
{
	return s1.pounds < s2.pounds;
}
Stonewt Stonewt::operator+  (const Stonewt & s)const
{
	Stonewt sum;
	sum.pounds = pounds + s.pounds;
	return sum;
}
Stonewt Stonewt::operator- (const Stonewt& s)const
{
	Stonewt diff;
	diff.pounds = pounds - s.pounds;
	return diff;
}
ostream& operator <<(ostream& os, const Stonewt s)
{

	os << s.pounds;
	return os;
}
void Stonewt::show_stn()const
{
	cout << stone << ",stone" << pds_left << " pounds\n";
}
void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}