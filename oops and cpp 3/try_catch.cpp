#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter number a,b" << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw 1;
        else
        {
            c = a / b;
            cout << "Division is " << c << endl;
        }
    }
    catch (int a)
    {
        cout << "divide by zero error" << a << endl;
    }

    return 0;
}