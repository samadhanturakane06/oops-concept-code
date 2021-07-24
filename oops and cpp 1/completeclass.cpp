#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &);
    int getlength() { return length; }
    int getbreadth() { return breadth; }

    void setlength();
    void setbreadth();
    int area();
    int perimeter();
    void setlength(int l);
    void setbreadth(int b);
};
int main()
{
    rectangle p;
    rectangle q(5, 5);
    rectangle r(q);
    cout << q.area();
    cout << r.area();
    return 0;
}
rectangle ::rectangle()
{
    length = 1;
    breadth = 1;
}
rectangle ::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
rectangle ::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void rectangle::setlength(int l)
{
    length = l;
}

void rectangle::setbreadth(int b)
{
    breadth = b;
}

int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length * breadth);
}