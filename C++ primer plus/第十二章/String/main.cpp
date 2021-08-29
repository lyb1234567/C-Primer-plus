#include"string.h"
#include<iostream>
using namespace std;
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using namespace std;
    String name;
    cout << "Hi,what's your name?\n";
    cin >> name;
    cout << name << ",please eenter up to" << ArSize
        << " short saysings<mpty line to quit:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
   /* for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ":";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;
    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
        {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
            {
                shortest = i;
            }
            if (sayings[i] < sayings[first])
            {
                first = i;
            }
        }
        cout << "Shortest saying:" << sayings[shortest] << endl;
        cout << "First alphabetiacally:\n" << sayings[first] << endl;
        cout << "This program used " << String::HowMany() << "String Objects.Bye\n";
    }
    else
    {
        cout << "No input ! Bye\n";
    }*/
    return 0;
}