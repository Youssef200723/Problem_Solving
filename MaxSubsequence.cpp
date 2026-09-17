#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string inputString;
    
    cin>>inputString;
    string MaxSubsequenceString="";
    MaxSubsequenceString+=inputString[0];
    for (int i = 1; i < inputString.length(); i++)
    {
        if(MaxSubsequenceString.back()!=inputString[i]){
            MaxSubsequenceString+=inputString[i];
        }
    }

    cout<<MaxSubsequenceString.length();
    

    return 0;
}