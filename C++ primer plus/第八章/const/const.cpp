#include<iostream>
#include<string>
using namespace std;
struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
const free_throws& accumulate(free_throws& target, const free_throws& sources);
int main()
{
	free_throws one = { "Mike",13,14 };
	free_throws two = { "jack Chou",20,30 };
	free_throws three = { "Lewis  Liu",40,31 };
	free_throws four = { "Judy",21,31 };
	free_throws five = { "Daniel",22,33 };
	string arr[5] = { "one","two","three","four","five" };
	free_throws dup;
	set_pc(one);
	dup=accumulate(one, two);
	display(one);
	//dup=accumulate((accumulate(three, one)), five);
	display(dup);
	
}
void display(const free_throws& ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "Made: " << ft.made << endl;
	cout << "Attempt:" << ft.attempts << endl;
	cout << "Percent:" << ft.percent << endl;
}

void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = 100 * float(ft.made) / float(ft.attempts);
	}
	else
		ft.percent = 0;
}

const free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}