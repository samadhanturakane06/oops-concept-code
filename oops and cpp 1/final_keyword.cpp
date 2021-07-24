#include <iostream>
using namespace std;
class parent //final
{
};
class child : public parent
{
};
int main()
{
    child d;
    return 0;
}

//final : used for restrict inheritance