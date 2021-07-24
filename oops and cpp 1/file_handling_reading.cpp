#include <iostream>
#include <fstream>
using namespace std;
//writing into file
int main()
{
    ifstream ifs("sam.txt");
    string name;
    int roll;
    string branch;

    ifs >> name >> roll >> branch;
    ifs.close();
    cout << name << endl
         << roll << endl
         << branch << endl;

    return 0;
}