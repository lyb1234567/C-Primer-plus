#include"golf.h"
#include<iostream>
const int SIZE = 5;
using namespace std;
int main()
{
    golf golf_arr[SIZE];
    int i = 0;
    char choice;
    int hc;
    while (setgolf(golf_arr[i]) and i<5)
    {
        cout << "You want to change the handicap(Y/N):";
        cin >> choice;
        if (choice == 'Y')
        {
            cout << "Enter a number for handicap:";
            cin >> hc;
            handicap(golf_arr[i], hc);
            cin.get();
        }
        
        else
            cin.get();
        showgolf(golf_arr[i]);
        cout << "\n\n";
        i++;
    }
    return  0;
    
}