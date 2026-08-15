#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout<<"0";
        return 0;
    }
    long long a = 0, b = 1;

    for (int i = 2; i < n; i++)
    {
        long long sum = a + b;
        a = b;
        b = sum;
    }
    cout << b;

    return 0;
}