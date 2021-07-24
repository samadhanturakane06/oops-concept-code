#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> v = {10, 20, 30, 40, 50};

    v.push_back(60);
    v.push_back(70);

    cout << "using iterator " << endl;
    list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;

    cout << "using for each loop" << endl;
    for (int x : v)
        cout << x << endl;

    return 0;
}