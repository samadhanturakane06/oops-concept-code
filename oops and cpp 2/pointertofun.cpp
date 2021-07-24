#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b ? a : b);
}

int min(int a, int b)
{
    return (a < b ? a : b);
}
int main()
{
    int (*ma)(int, int);  //pointer declaration
    ma = max;             //initilization
    int x = (*ma)(10, 5); //calling
    cout << "max is" << x << endl;

    int (*mi)(int, int);
    mi = min;
    int y = (*mi)(10, 5);
    cout << "min is " << y << endl;
    return 0;
}