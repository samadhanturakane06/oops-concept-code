#include <iostream>
using namespace std;
class test
{
    int x = 10; //inclass_initiolizer
    int y = 20;

public:
    test(int a, int b)
    {
        int x = a;
        int y = b;
    }
    test() : test(5, 6)
    {
    }
};
int main()
{
    test t;

    return 0;
}
