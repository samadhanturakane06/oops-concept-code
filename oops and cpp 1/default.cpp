#include <iostream>
using namespace std;

int add(int a, int b, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
    int m = add(10, 11);
    cout << m;
    return 0;
}