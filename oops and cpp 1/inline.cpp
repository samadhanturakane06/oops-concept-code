#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    inline int perimeter();
};
int main()
{
    rectangle r(5, 5);
    cout << r.area();
    cout << " " << endl;
    cout << r.perimeter();
    return 0;
}

int rectangle::perimeter()
{
    return 2 * (length * breadth);
}