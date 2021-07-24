#include <iostream>
using namespace std;

class grandfather
{
public:
    string car;
    void show()
    {
        cout << car << endl;
    }
};
class son : virtual public grandfather
{
public:
    string phone;
    void show1()
    {
        cout << car << " " << phone << endl;
    }
};
class sons_wife : virtual public grandfather
{
public:
    string watch;
    void display()
    {
        cout << watch << endl;
    }
};
class child : public son, sons_wife
{
public:
    void display1()
    {
        cout << "car is: " << car << "  "
             << "phone  is : " << phone << " watch is : " << watch << endl;
    }
};
int main()
{
    child d;
    d.car = "tata";
    d.phone = "redmi";

    d.display1();
    return 0;
}