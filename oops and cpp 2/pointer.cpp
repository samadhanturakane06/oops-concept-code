#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a = 10;
    int *p; //declaration

    p = &a; //initiolization
    cout << a << endl;
    cout << p << endl;
    cout << &a << endl;
    cout << *p << endl; //dereferncing
    return 0;
}