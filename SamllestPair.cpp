#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        long long arr[105];

        for (int i = 0; i < n; i++)
            scanf("%lld", &arr[i]);

        long long ans = LLONG_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long sum = arr[i] + arr[j] + (j - i);
                ans = min(ans, sum);
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}