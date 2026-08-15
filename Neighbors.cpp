#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;
    bool ok = false;
    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            if (i == x && j == y)
                continue;

            if (i >= 0 && i < n && j >= 0 && j < m)
            {
                if (arr[i][j] == '.')
                {
                    ok = true;
                }
            }
        }
    }
    if (ok)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}