#include <iostream>
using namespace std;

int add(int a, int b)
{

    return a + b;
}
int main()
{
    int a = 10, b = 20, c;
    c = add(a, b);
    cout << "addition is " << c << endl;
    return 0;
}