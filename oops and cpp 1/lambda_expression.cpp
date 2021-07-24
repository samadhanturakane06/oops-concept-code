#include <iostream>
using namespace std;
int main()
{
    []() { cout << "hello" << endl; }();

    [](int x, int y) { cout << x + y << endl; }(2, 2);

    int x = [](int x, int y) { return x + y; }(10, 10);
    cout << x << endl;

    int a = 10;
    int b = 20;
    [a, b]() { cout << a << b << endl; }();
    [&a, &b]() { cout << ++a << " " << --b << endl; }();
    [&]() { cout << ++a << "" << ++b << endl; }();
    return 0;
}