#include <iostream>
using namespace std;
int main()
{
    int n, rem;
    cout << "enter number" << endl;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        cout << rem << endl;
    }
    return 0;
}