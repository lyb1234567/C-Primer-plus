#ifndef BETELG_H_
#define BETELG_H_
class Pl
{
private:
	char plorg[19];
	int CI;
public:
	Pl(const char* n="Plorga", int ci = 50);
	void ci(int&c);
	void show()const;
};
#endif // !BETELG_H_

#pragma once
