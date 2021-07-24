#include <iostream>
using namespace std;

int division(int x, int y)
{
    if (y == 0)
        throw 1;
    else
        return x / y;
}

int main()
{
    int a, b, c;
    cout << "enter number a,b" << endl;
    cin >> a >> b;

    try
    {
        c = division(a, b);
        cout << "division is : " << c << endl;
    }
    catch (int a)
    {
        cout << "divide by zero error" << a << endl;
    }

    return 0;
}