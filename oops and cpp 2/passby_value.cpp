
#include <iostream>
using namespace std;

void swaping(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "enter x and y" << endl;
    cin >> x >> y;
    swaping(x, y);
    cout << x << " " << y << endl;
    return 0;
}