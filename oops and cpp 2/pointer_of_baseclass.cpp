#include <iostream>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout << " in fun 1" << endl;
    }
    void fun2()
    {
        cout << "in fun 2" << endl;
    }
};

class derived : public base
{
public:
    void fun3()
    {
        cout << "in fun 3" << endl;
    }
};

int main()
{
    derived d;

    base *ptr = &d;
    ptr->fun1();
    ptr->fun2();
    fptr->fun3();

    /* base b;
    derived *ptr = &b;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    */
    return 0;
}