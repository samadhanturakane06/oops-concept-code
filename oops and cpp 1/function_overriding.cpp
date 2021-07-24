#include <iostream>
using namespace std;
class parent
{
public:
    void display()
    {
        cout << "in parent" << endl;
    }
};
class child : public parent
{
public:
    void display()
    {
        cout << "in child" << endl;
    }
};
int main()
{
    child d;
    d.display();
    // d.parent::display();

    return 0;
}