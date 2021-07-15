#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character:" << endl;
	cin >> ch;
	cout << "Hola!";
	cout << "Thank you for the " << ch << " character" << endl;

// 我们也可以使用cout.put()来打印单个字符
	char N = 'N';
	cout.put(N);
	cout << endl;
	//对于单个字符进行ASCII码转换
	int i = ch;
	cout << "The corresponding number of ch is :" << i << endl;
	//对单个字符进行加减，可以得到对应ASCII 表上的任意一个字符
	ch = ch + 1;
	cout << "The next character of ch is :" << ch;
	return 0;
}