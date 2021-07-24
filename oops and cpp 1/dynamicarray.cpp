#include <iostream>

using namespace std;
int main()
{
    int *p;
    int temp;
    p = new int[5];
    cout << "input array enter" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        *(p + i) = temp;
    }
    cout << "output array" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << *(p + i) << endl;
        ;
    }

    return 0;
}