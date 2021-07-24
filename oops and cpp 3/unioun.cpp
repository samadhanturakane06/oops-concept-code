#include <bits/stdc++.h>
using namespace std;

void unionarr(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            cout << arr1[i];
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j];
            j++;
        }
        else
        {
            cout << arr2[j];
            i++;
            j++;
        }
    }
    if (i < n)
    {
        cout << arr1[i];
        i++;
    }
    if (j < m)
    {
        cout << arr2[j];
        j++;
    }
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr1) / sizeof(arr2[0]);

    unionarr(arr1, arr2, n, m);
    return 0;
}