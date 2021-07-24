
#include <iostream>
using namespace std;
int main()
{
    int count = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i + j >= 3)
                cout << " ";
            else
                cout << "*";
        }

        cout << "" << endl;
    }

    return 0;
}