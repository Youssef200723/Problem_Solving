#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
string s;
cin>>s;
int freq[26] = {};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char('a' + i) << " : " << freq[i] << '\n';
        }
    }


    return 0;
}