#include <iostream>
using namespace std;

/*int max(int a, int b)
{
    return a > b ? a : b;
}
float max(float a,float b)
{
    return a>b?a:b;
}
*/
template <class T>
T maxim(T a, T b)
{
    return a > b ? a : b;
}

template <class t>
t mini(t a, t b)
{
    return a < b ? a : b;
}

int main()
{
    cout << maxim(10, 5) << endl;
    cout << mini(10.1f, 11.1f) << endl;
    ;

    return 0;
}