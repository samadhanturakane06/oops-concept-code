#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    int setlength(int l)
    {
        length = l;
    }

    int setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {

        return 2 * (length * breadth);
    }
};

int main()
{
    rectangle p;

    p.setlength(5);
    p.setbreadth(5);
    cout << p.area();
    cout << " " << endl;
    cout << p.getbreadth() << endl;
    cout << p.getlength();
    return 0;
}