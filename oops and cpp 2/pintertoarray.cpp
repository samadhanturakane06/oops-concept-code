#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int arr[] = {11, 12, 13, 14, 5, 6, 7};
    int *p;
    p = arr;
    int *q = &arr[4];
    cout << arr << endl;
    cout << p - q << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << *p << endl;
        p++;
    }

    return 0;
}