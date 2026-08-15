#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int na;
        cin >> na;
        long long arr[na];
        for (int i = 0; i < na; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < na; i++)
        {
            long long m = arr[i];
            
            for (int j = i; j < na; j++)
            {
                m = max(m, arr[j]);
                cout << m << " ";
            }
        }
        cout<<endl;
    }
}