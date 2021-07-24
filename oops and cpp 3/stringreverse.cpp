#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j;
    string str;
    char str1[100];
    cout << "enter a string" << endl;
    cin >> str;

    for (i = 0; str[i] != '\0'; i++)
    {
    }
    cout << "valu of i " << i << endl;
    cout << "string is " << str << endl;

    for (j = 0; j < i - 1; j++)
    {
        str1[j] = str[i--];
    }
    cout << "reverse string is" << endl;
    for (i = 0; str1[i] = '\0'; i++)
    {
        cout << "string " << str1[i];
    }
    return 0;
}