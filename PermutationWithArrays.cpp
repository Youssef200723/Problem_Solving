#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr1[n];
    long long arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            continue;
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}