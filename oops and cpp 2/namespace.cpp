#include <iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout << "first fun " << endl;
    }
}

namespace second
{
    void fun()
    {

        cout << "second fun " << endl;
    }
}
int main()
{
    first::fun();
    cout << " " << endl;
    second::fun();
    return 0;
}