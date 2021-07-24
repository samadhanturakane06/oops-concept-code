#include <iostream>

using namespace std;
int main()
{
    float x = 10.1;
    char y = 'a';

    int z = (int)x + y; //by converting assignment
    cout << z << endl;

    float f = 3.5;
    int b = static_cast<int>(f);
    cout << b;
    return 0;
}