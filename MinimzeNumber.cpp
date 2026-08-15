#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1e9;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        int cnt = 0;
        while (x % 2 == 0)
        {
            cnt++;
            x /= 2;
        }

        ans = min(ans, cnt);
    }

    cout << ans;
    return 0;
}