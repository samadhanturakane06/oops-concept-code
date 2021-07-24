#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r(5, 5);
    cout << r.area();
    return 0;
}
