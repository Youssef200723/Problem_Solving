#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        string t;
        string sum;
        cin >> s >> t;
        for (int i = 0; i < max(s.length(), t.length()); i++)
        {
            if(i< s.length())
            sum+=s[i];
            if(i<t.length())
            sum+=t[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}