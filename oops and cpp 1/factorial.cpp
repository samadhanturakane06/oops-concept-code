#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 0)
        return 1;
    else
        return (n * fact(n - 1));
}
int main()
{
    int n, factorial;
    cout << "enter number that u want factorial" << endl;
    cin >> n;

    factorial = fact(n);

    cout << "factorial is  " << factorial << endl;
}