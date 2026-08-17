#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, newString ="";
    cin >> s;
    int n = 0;
    while (n < s.length())
    {
        if(s[n]>='a' && s[n]<='z')
        {
            newString+=(char)toupper(s[n]);
        }else if (s[n]>='A' && s[n]<='Z')
        {
            newString+=(char)tolower(s[n]);
        }else
        {
            newString+=" ";
        }
        n++;
    }
    cout<<newString;
}