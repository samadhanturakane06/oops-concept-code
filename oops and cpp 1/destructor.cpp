#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "constructor" << endl;
    }
    ~demo()
    {
        cout << "distructor" << endl;
    }
};

int main()
{
    demo *d = new demo();
    delete d;
    return 0;
}