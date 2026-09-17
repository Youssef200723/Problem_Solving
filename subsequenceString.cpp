#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string h = "hello";
    string subsequence;
    getline(cin, subsequence);

    int indxehello = 0;
    for (int j = 0; j < subsequence.length(); j++)
    {
        if (indxehello < h.length() && subsequence[j] == h[indxehello])
            indxehello++;
    }
    if (indxehello == h.length())
    {
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}