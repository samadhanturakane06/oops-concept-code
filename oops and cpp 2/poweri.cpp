#include <iostream>
using namespace std;
int pow(int n, int m)
{
    if (m <= 0)
        return 1;
    else
        return n * pow(n, m - 1);
}
int main()

{

    int n, m;
    int power;
    cout << "enter n and m" << endl;
    cin >> n >> m;
    power = pow(n, m);
    cout << "power is " << power << endl;
    return 0;
}