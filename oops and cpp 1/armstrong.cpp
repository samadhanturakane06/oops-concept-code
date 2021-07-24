#include <iostream>
using namespace std;
int main()
{
    int n, rem;
    int sum = 0;
    cout << "enter number" << endl;
    cin >> n;
    int m = n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + rem * rem * rem;
    }
    if (m == sum)
        cout << "armstrong" << endl;
    else
        cout << "not armstrong" << endl;
    return 0;
}