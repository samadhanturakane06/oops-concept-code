#include <iostream>
using namespace std;

class rational
{
public:
    int p;
    int q;
    rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }

    rational operator+(rational r)
    {
        rational temp;
        temp.p = this->p * r.q + r.p * this->q;
        temp.q = this->q * r.q;

        return temp;
    }
    friend ostream &operator<<(ostream &out, rational &r);
};

ostream &operator<<(ostream &out, rational &r)
{

    out << r.p << r.q;
    return out;
}

int main()
{
    rational r1(10, 10);
    rational r2(20, 20);
    rational r3;

    r3 = r1 + r2;
    cout << r3;
}