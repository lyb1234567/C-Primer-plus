#include<iostream>
#include<string>
using namespace std;
int main()
{
    const int Max=10;
    using namespace std;
    //get data
    double donation[Max];
    cout << "Please enter the donation.\n";
    cout << "You may enter up to " << Max
        << " donation.\n";
    cout << "donation #1: ";
    
    double sum = 0;
    int i = 0;
    while (i <Max && cin >> donation[i])
    {
            i++;
            if (i >= Max)
                break;
            cout << "donation #" << i + 1 << ": ";
    }
    for (int j = 0; j < i; j++)
    {
        sum = sum + donation[j];
    }
    float average;
    average = (float)(sum / i);
    cout << "Average:" << average << endl;
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (donation[j] > average)
            count = count + 1;

    }
    cout << "Count:" << count;
    return 0;

}