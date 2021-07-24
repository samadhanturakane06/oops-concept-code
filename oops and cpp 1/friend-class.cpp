#include <iostream>
using namespace std;

class your;
class my
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend your;
};

class your
{
    my t;
    void fun()
    {

        t.a = 10;
        t.b = 20;
        t.c = 30;
    }
};

int main()
{
}