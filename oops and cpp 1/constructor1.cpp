#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int l, int b)
    {
        getlength(l);
        getbreadth(b);
    }
    rectangle(rectangle &q)
    {
        length = q.length;
        breadth = q.breadth;
    }
    void getlength(int l)
    {
        length = l;
    }
    void getbreadth(int b)
    {
        breadth = b;
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
    rectangle q(5, 5);
    rectangle r(q);
    cout << q.area() << endl;
    cout << r.area();
}