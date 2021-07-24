#include <iostream>
using namespace std;
class parent
{
public:
    virtual void display()
    {
        cout << "in parent" << endl;
    }
};
class child : public parent
{
public:
    void display()
    {
        cout << "in child" << endl;
    }
};
int main()
{
    child d;
    parent *ptr = &d;
    ptr->display();

    return 0;
}