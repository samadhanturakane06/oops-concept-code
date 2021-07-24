#include <iostream>

using namespace std;
int main()
{
    int x = 1;
    char y = 'a';

    x = x + y; //implicit type casting
    cout << x << endl;

    float a = 12.12;
    int b = 10;
    b = b + a;
    cout << b << endl;
    return 0;
}