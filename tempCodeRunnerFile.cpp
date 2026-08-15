#include <iostream>
#include <cmath>
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
    bool ok = false;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (arr[x - i][y - j] == '.')
            {
                ok = true;
                break;
            }
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