#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
float add(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    int c, d;
    c = add(10, 20);
    d = add(11.1, 12.2, 13.3);
    cout << "addition is " << c << endl;
    cout << "additon of float is " << d << endl;
    return 0;
}