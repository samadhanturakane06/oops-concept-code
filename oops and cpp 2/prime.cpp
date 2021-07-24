#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "enter num" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "prime number" << endl;
    else
        cout << "not prime number" << endl;
    return 0;
}