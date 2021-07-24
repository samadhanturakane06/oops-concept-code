#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    double x = 1.412;
    cout << floor(x) << endl;
    cout << ceil(x) << endl;

    double y = 1.611;
    cout << round(y) << endl;

    double pi = 3.1425;
    cout << fixed << setprecision(0) << pi << endl;
    cout << fixed << setprecision(1) << pi << endl;
    cout << fixed << setprecision(2) << pi << endl;

    double s = 1.411;
    cout << trunc(s);
    return 0;
}