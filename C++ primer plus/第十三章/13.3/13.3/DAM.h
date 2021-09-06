#ifndef DMA_H_
#define DMA_H_
#include<iostream>
#include<cstring>
class DMAABS {
private:
	char* label;
	int rating;
public:
	virtual ~DMAABS();
	DMAABS(const char* l = "null", int r = 0);
	DMAABS(const DMAABS& rs);
	DMAABS& operator=(const DMAABS& rs);
	friend std::ostream& operator<<(std::ostream& os, const DMAABS& rs);
	virtual void view() const = 0;

};

class baseDMA :public DMAABS
{
public:
	baseDMA(const char* l = "null", int r = 0) :DMAABS(l, r) {}
	baseDMA(const baseDMA& rs) :DMAABS(rs) {}
	virtual void view() const;
};

class lacksDMA :public DMAABS
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null",
		int r = 0);
	lacksDMA(const char* c, const DMAABS& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
	virtual void view()const;
};

class hasDMA :public DMAABS
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const DMAABS& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
	virtual void view()const;
};
DMAABS::DMAABS(const char* l, int r)
{

	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}
DMAABS::DMAABS(const DMAABS& rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
}
DMAABS::~DMAABS()
{
	delete[] label;
}
DMAABS& DMAABS::operator=(const DMAABS& rs)
{
	char* temp = label;
	label = new char[strlen(rs.label) + 1];
	strcpy_s(label, strlen(rs.label) + 1, rs.label);
	rating = rs.rating;
	delete[]temp;
	return *this;
}
std::ostream& operator<<(std::ostream& os, const DMAABS& rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}
void DMAABS::view() const
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}
void baseDMA::view() const
{
	DMAABS::view();
}
lacksDMA::lacksDMA(const char* c, const char* l, int r) :DMAABS(l, r)
{
	strcpy_s(color, c);
	color[COL_LEN - 1] = '\0';
}
lacksDMA::lacksDMA(const char* c, const DMAABS& rs) : DMAABS(rs)
{
	strcpy_s(color, c);
	color[COL_LEN - 1] = '\0';
}
std::ostream& operator<<(std::ostream& os, const lacksDMA& ls)
{
	os << (const DMAABS&)ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}
void lacksDMA::view() const
{
	DMAABS::view();
	std::cout << "Color: " << color << std::endl;
}
hasDMA::hasDMA(const char* s, const char* l, int r) :DMAABS(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}
hasDMA::hasDMA(const char* s, const DMAABS& rs) : DMAABS(rs)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA& hs) :DMAABS(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style + 1), hs.style);
}

hasDMA::~hasDMA()
{
	delete[]style;
}
void hasDMA::view()const
{
	DMAABS::view();
	std::cout << "Style: " << style << std::endl;
}
hasDMA& hasDMA::operator=(const hasDMA& hs)
{

	char* temp = style;

	DMAABS::operator=(hs);
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
	delete[] temp;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs)
{
	os << (const DMAABS&)hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}

#endif
