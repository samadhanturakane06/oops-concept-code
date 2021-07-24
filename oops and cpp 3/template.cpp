#include <iostream>
using namespace std;
template <class T>

T maxi(T x, T y)
{
    return (x > y ? x : y);
}
int main()
{
    int t;
    t = maxi(10, 12);
    cout << t;
    return 0;
}