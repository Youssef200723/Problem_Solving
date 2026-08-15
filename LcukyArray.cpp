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
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            cont++;
        }
    }
    if (cont % 2 != 0)
    {
        cout << "Lucky";
    }
    else
        cout << "Unlucky";
}