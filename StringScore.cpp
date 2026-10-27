#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long numberOfSixeText = 0, scoure = 0;
    string text = "";
    cin >> numberOfSixeText>> text;
    for (int i = 0; i < numberOfSixeText; i++)
    {
        if (text[i] == 'V')
        {
            scoure += 5;
        }
        else if (text[i] == 'W')
        {
            scoure += 2;
        }
        else if (text[i] == 'X' && i + 1 != numberOfSixeText)
        {
            i++;
        }
        else if (text[i] == 'Y' && i + 1 != numberOfSixeText)
        {
            i++;
            text.push_back(text[i]);
            numberOfSixeText++;
        }
        else if (text[i] == 'Z' && i + 1 != numberOfSixeText)
        {
            if (text[i + 1] == 'V')
            {
                scoure /= 5;
                i++;
            }
            else if (text[i + 1] == 'W')
            {
                scoure /= 2;
                i++;
            }
        }
    }
    cout << scoure;
    return 0;
}