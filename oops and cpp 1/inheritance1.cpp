#include <iostream>
using namespace std;

class base
{
public:
    int x;
    void show()
    {
        cout << x << endl;
    }
};
class derived : public base
{
public:
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    derived d;
    d.x = 10;
    d.y = 10;
    d.display();
    return 0;
}