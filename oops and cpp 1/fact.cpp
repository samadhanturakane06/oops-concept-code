#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cout << "enter fact number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        fact = fact * (n - i);
    }
    cout << "factoiral is " << fact << endl;
    return 0;
}