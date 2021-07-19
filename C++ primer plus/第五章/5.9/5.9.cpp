#include <iostream>  
#include <string>  
using namespace std;
int main()
{
    cout << "Enter words (to stop, type the word done):" << endl;
    string str;
    int count = 0;
    while (cin >> str && str != "done")
        count++;
    cout << count << endl;

    system("pause");
    return 0;
}
