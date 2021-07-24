#include <iostream>
using namespace std;
int main()
{
    int n, m;

    cout << "enter number" << endl;
    cin >> n >> m;

    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    cout << m; //m is gcd grtest commen divisor;
    return 0;
}