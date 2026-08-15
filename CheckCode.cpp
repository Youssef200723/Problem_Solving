#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    string s;
    cin >> s;
    if (s.length() != (n + a) + 1)
    {
        cout << "No";
        return 0;
    }
    if (s[n] != '-')
    {
        cout << "No";
        return 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (i == n)
            continue;
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}