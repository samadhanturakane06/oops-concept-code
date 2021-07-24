#include <iostream>
#define pi 3.1425
#define c cout
#define sqr(x) x *x
#define max(x, y) (x > y ? x : y)
#define msg(x) #x
#ifndef pi
#define pi 3.1425
#endif

using namespace std;

int main()
{
    cout << pi << endl;
    c << "sam" << endl;
    cout << msg(sai) << endl;
    cout << sqr(5) << endl;
    cout << max(10, 12);
    return 0;
}