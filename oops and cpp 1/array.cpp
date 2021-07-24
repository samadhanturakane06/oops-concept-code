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

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        /* code */
    }
    cout << "size of array is" << sizeof arr[size] << endl;
    delete[] arr;
    cout << "enter size" << endl;
    cin >> size;

    arr = new int[size];

    cout << "size of new array" << sizeof arr[size];
    return 0;
}