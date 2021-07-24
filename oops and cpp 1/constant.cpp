#include <iostream>
using namespace std;
class demo
{
public:
    int x = 10;
    void display() const
    {

        //x++;
        cout << x << endl;
    }
};

int main()
{
    demo d;
    d.display();

    return 0;
}