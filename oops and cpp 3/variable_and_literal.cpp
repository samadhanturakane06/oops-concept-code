#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int a = 10;
    int a1;
    //int 1a;
    int a_1;
    int _a;
    cout << a << endl;
    cout << _a << endl;

    //variable initiolization
    int s = 10;
    int p(10);
    int q = (10);
    int r{10};
    int t = {10};

    char y = 's';
    //char u="s";
    char i = 65;
    cout << i << endl;
    char o = 14.44;
    cout << o << endl;

    float d = 12.3;
    cout << typeid(d).name() << endl;
    cout << sizeof(d);
    return 0;
}