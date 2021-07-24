// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        int i = 0, j = 0;
        int count = 0;
        while (i < n && j < m)
        {

            if (a[i] < b[j])
            {

                i++;
            }
            else if (b[j] < a[i])
            {
                j++;
            }
            else
            {
                count++;
                j++;
                i++;
            }
        }

        return count++;
    }
};

// { Driver Code Starts.
int main()
{

    cout << "enter size n,m " << endl;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    cout << "enteer a element" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "enteer b element" << endl;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    Solution ob;
    cout << "intersction elemenr count is " << endl;
    cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;

    return 0;
} // } Driver Code Ends