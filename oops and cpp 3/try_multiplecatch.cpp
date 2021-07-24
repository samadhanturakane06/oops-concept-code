#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw "sam";
    }

    catch (int a)
    {
        cout << "integer catch" << endl;
    }
    catch (float b)
    {
        cout << "float catch" << endl;
    }

    catch (...)
    {
        cout << "All catch" << endl;
    }
    return 0;
}