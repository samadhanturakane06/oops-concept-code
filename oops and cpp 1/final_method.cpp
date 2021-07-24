#include <iostream>
using namespace std;
class parent
{
    void fun() //final
    {
    }
};
class child : public parent
{
    void fun()
    {
    }
};
int main()
{
    child d;
    return 0;
}