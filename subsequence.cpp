#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long arrA[n], arrB[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }

    bool ok = true;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arrA[i] == arrB[count])
        {
            count++;
        }
    }

    if (count == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}