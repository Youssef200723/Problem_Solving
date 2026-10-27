#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string inputString;
    getline(cin, inputString);
    int CountWords = 0;

    for (int index = 0; index < inputString.length(); index++)
    {
        if (isalpha(inputString[index]) && (index == 0 || !isalpha(inputString[index-1]) ))
        {
            CountWords++;
        }
    }
    cout << CountWords ;

    return 0;
}