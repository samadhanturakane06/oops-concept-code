#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << " non parametrise base class " << endl;
    }

    base(int a)
    {
        cout << "parametrise base class" << a << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << " non parametrise derived class" << endl;
    }

    derived(int b)
    {
        cout << "parametrise derived class" << b << endl;
    }
    derived(int b, int a) : base(a)
    {
        cout << "parametrise derived class" << b << endl;
    }
};
int main()
{
    derived d(10, 20);
    return 0;
}