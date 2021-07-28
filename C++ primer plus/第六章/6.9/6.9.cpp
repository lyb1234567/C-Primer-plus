#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct patron {
    string name;
    double money;
};
int main()
{
	string filename;
	double value;
    ifstream inFile;
	cout << "Enter the name of the data file:";
	getline(cin, filename);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int count;
    inFile >> count;
    inFile.get();//读取文件数据 

    patron* peoplelist = new patron[count];
    for (int i = 0; i < count; i++)
    {
        getline(inFile, peoplelist[i].name);
        inFile >> peoplelist[i].money;
        inFile.get();
    }
    cout << "\nGrand Patrons: " << endl;
    int n = 0;
    for (int i = 0; i < count; i++)
    {
        if (peoplelist[i].money > 10000)
        {
            cout << "Patrons name: " << peoplelist[i].name << endl;
            cout << "donation: " << peoplelist[i].money << endl;
            n++;
        }
    }
    if (n == 0)
        cout << "none";

    int m = 0;
    cout << "\nPatrons: " << endl;
    for (int i = 0; i < count; i++)
    {
        if (peoplelist[i].money <= 10000)
        {
            cout << "Patrons name: " << peoplelist[i].name << endl;
            cout << "donation: " << peoplelist[i].money << endl;
            m++;
        }
    }
    if (m == 0)
        cout << "none";
    delete peoplelist;
    inFile.close();
    return 0;
}