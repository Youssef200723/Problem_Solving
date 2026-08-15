#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum1=0, sum=0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][n - i - 1];
    }
    cout << llabs(sum1 - sum);
}