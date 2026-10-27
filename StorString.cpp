#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long numberOfCharactersInAString;
    cin>>numberOfCharactersInAString;

    string inputString;
    cin>>inputString;

    int frequency[26] = {0};

    for (char c : inputString)
    {
        frequency[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (frequency[i] > 0)
        {
            cout << char(i + 'a');
            frequency[i]--;
        }
    }

    return 0;
}