#include<iostream>
#include<cstring>
using namespace std;

int main() {
    cout << "Enter words (to stop, type the word done):" << endl;
    char ch[20];
    int count = 0;
    while ((cin >> ch) && strcmp(ch,"done") != 0)
        count++;
    cout << count << endl;
    system("pause");
    return 0;
}
