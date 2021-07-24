#include <iostream>
using namespace std;

void fun(const int &x, int &y)
{
    //x++;
    cout << x << " " << y << endl;
}
int main()
{
    int a = 10, b = 20;
    fun(a, b);
    cout << a << " " << b << endl;
    return 0;
}