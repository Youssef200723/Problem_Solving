#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string inputString;
    getline(cin,inputString);
    string updatString="";
   string newString="";
   for (int i = 0; i < inputString.length(); )
{
    if (isalpha(inputString[i]))
    {
        string word = "";
        while (i < inputString.length() && isalpha(inputString[i]))
        {
            word += inputString[i];
            i++;
        }
        for (int left = 0, right = word.length() - 1;
             left < right;
             left++, right--)
        {
            swap(word[left], word[right]);
        }
        newString += word;
    }
    else
    {
        newString += inputString[i];
        i++;
    }
}
    cout<<newString;
    return 0;
}