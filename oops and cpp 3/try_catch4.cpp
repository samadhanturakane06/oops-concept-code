#include <iostream>
using namespace std;

class MyException1 : exception
{
};

class MyException2 : public MyException1
{
};
int main()
{
    try
    {
        throw MyException1();
    }

    catch (MyException2 a)
    {
        cout << "myexception1 catch" << endl;
    }
    catch (MyException1 b)
    {
        cout << "myexception1 catch" << endl;
    }

    return 0;
}