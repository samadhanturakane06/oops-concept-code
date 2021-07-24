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
    static int return_count()
    {

        return count;
    }
};

int test::count = 0;
int main()
{
    cout << test::count << endl;
    test t1, t2;
    // cout << test::return_count;
    cout << t1.return_count();
    cout << t2.return_count();
    return 0;
}