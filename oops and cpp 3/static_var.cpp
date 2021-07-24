#include <iostream>
using namespace std;

int fun()
{
    static int a = 10;
    a++;
    cout << a << endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}