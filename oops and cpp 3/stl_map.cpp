#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<int, string> m;

    m.insert(pair<int, string>(1, "Sam"));
    m.insert(pair<int, string>(2, "sai"));
    m.insert(pair<int, string>(3, "ram"));

    map<int, string>::iterator itr;

    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}