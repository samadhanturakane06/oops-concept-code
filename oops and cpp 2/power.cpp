#include <iostream>
using namespace std;
int main()
{
    int power = 1;
    int n, m;
    cout << "enter n and m" << endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        power = power * n;
    }
    cout << "power is " << power << endl;
    return 0;
}