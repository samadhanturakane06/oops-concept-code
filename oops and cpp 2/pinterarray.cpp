#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a[] = {2, 4, 6, 8, 9, 7, 5, 3, 1};
    int *p = a;
    cout << a << endl;

    cout << a + 1 << endl;
    cout << &a[1] << endl;
    cout << p << endl;

    return 0;
}