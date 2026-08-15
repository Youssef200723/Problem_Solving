#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {

        sum += a[i] - '0';
    }
    cout << sum;
}