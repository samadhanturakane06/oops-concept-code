#include <iostream>

using namespace std;
int main()
{
    int size;
    cout << "size" << endl;
    cin >> size;
    int *arr;

    arr = new int[size];

    cout << "enter element" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        /* code */
    }

    cout << arr << endl;
    cout << *arr << endl;
    cout << *arr + 2 << endl;
    cout << *(arr + 1) << endl;
    arr++;
    cout << *(arr) << endl;

    return 0;
}