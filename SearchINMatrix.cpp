#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    long long arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int g = 0; g < n2; g++)
        {
            cin >> arr[i][g];
        }
    }
    long long number;
    cin >> number;
    bool ok = false;
    for (int i = 0; i < n1; i++)
    {
        for (int g = 0; g < n2; g++)
        {
            if (arr[i][g] == number)
            {
                ok = true;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (ok)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }

    return 0;
}