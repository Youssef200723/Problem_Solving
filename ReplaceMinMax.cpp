#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    long long arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == arr[0])
        {
            arr2[i] = arr[n - 1];
        }
        else if (arr2[i] == arr[n - 1])
        {
            arr2[i] = arr[0];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}