#include <iostream>
using namespace std;
class base
{
public:
    ~base()
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
    derived d;
    return 0;
}