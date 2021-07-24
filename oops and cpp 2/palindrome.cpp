#include <iostream>
using namespace std;
int main()
{
    int n;
    int rem, res = 0;
    cout << "enter number" << endl;
    cin >> n;
    int m = n; //at last n beacme zero;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        cout << rem;
        res = res * 10 + rem;
    }
    cout << "" << endl;
    if (m == res)
        cout << "palindrome" << endl;
    else
        cout << "not palindrome" << endl;
    return 0;
}