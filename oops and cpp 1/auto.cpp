#include <iostream>
using namespace std;

float fun()
{
    return 3.142;
}
int main()
{
    auto x = 10 + 10.8 + 'a';
    cout << x << endl;

    auto c = fun();
    cout << c << endl;

    int z = 12.2;

    decltype(z) y = 12.98; //y datatype same as z datatype
    return 0;
}