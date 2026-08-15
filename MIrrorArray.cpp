 #include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> arr(n, vector<long long>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}