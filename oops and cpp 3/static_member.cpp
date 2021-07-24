#include <iostream>
using namespace std;

class test
{
public:
    int a;
    static int count;

    test()
    {
        a = 10;
        count++;
    }
};

int test::count = 0;
int main()
{
    cout << test::count << endl;
    test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;

    t1.count = 25;
    cout << t2.count;
    return 0;
}