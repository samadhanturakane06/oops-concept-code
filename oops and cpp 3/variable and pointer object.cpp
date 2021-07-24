#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

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
    rectangle *a;
    a = &p;
    a->length = 5;
    a->breadth = 5;
    cout << a->area();
    return 0;
}