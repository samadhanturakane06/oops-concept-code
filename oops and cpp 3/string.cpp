#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j;
    string str;
    cout << "enter string" << endl;
    cin >> str;

    int start = str[0];

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    int end = i;

    for (j = end; j >= 0; j--)
    {
        cout << str[j];
    }
    return 0;
}