#include <iostream>
using namespace std;

int division(int x, int y) throw(double)
{
    if (y == 0)
        throw 1.5;
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
    catch (float e)
    {
        cout << "divide by zero error" << endl;
    }

    return 0;
}