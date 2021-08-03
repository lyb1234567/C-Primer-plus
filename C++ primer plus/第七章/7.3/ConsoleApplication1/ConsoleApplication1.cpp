#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box);
box *set(box*);
int main()
{
	box j = { "Jack",1,2,3,100 };
	show(j);
	set(&j);
	cout << "\n\n";
	show(j);
	
}
void show(box a)
{
	cout << "Name:" << a.maker << endl;
	cout << "Height:" << a.height << endl;
	cout << "Width:" << a.width << endl;
	cout << "Length:" << a.length << endl;
	cout << "Volume:" << a.volume << endl;
}
box * set(box *b)
{
	b->volume = b->height * b->length * b->width;
	return b;
}