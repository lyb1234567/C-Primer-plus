#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	const Golf & setgolf(const char *, int);

	int setgolf();

	void hand(int hc);

	void showgolf() const;
};
#endif // !GOLF_H_

#pragma once
