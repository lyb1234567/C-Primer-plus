#include<iostream>
#include<string>
using namespace std;

class Stock
{
	string name_;
	double x_;
public:
	void show() const;
	Stock();
	Stock(const string& name, double x);
	~Stock();
};

void Stock::show() const 
{
	cout << name_ << endl;
	cout << x_ << endl;
}
Stock::Stock()
{
	cout << "Use class Stock!!";
}
Stock::Stock(const string& name, double x)
{
	name_ = name;
	x_ = x;
}
Stock::~Stock()
{
	cout << "Good bye!!!";
}
int main()
{
	Stock stock("Mick JACK", 22.2);
	const Stock st = { "jack ma",1000};
	st.show();
	return 0;
}