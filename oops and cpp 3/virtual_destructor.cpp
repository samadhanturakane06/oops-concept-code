#include <iostream>
using namespace std;
class base
{
public:
    virtual ~base()
    {
        cout << " base distructor" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << " derived distructor" << endl;
    }
};

int main()
{
    base *p = new derived();
    delete p;
    return 0;
}