#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
string s;
cin >> s;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]!=s[s.length()-i-1])
    {
        cout<<"NO";
    return 0;
    }

}
cout <<"YES";

    return 0;
}