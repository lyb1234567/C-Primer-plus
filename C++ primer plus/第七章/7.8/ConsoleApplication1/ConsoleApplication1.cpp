#include <iostream>
const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
void fill(double pa[]);
void show(double pa[]);
using namespace std;

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    system("pause");
    return 0;
}

void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(double pa[])
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
