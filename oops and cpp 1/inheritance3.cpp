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
class child : public derived
{
public:
    void display1()
    {
        cout << "x is: " << x << "y is : " << y << endl;
    }
};
int main()
{
    child d;
    d.x = 10;
    d.y = 10;
    d.display();
    d.display1();
    return 0;
}