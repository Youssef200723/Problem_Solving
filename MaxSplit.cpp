#include <bits/stdc++.h>
using namespace std;

void findSplit(string text)
{
    vector <string> Splits;
   string newSplit="";
    int numberOfL=0;
    int numberOfR=0;
    for (int i = 0; i < text.length(); i++)
    {
        if(text[i]=='L')
        {
            numberOfL++;
            newSplit+=text[i];
        }else if(text[i]=='R')
        {
            numberOfR++;
            newSplit+=text[i];
        }
        if(numberOfL==numberOfR)
        {
           Splits.push_back(newSplit);
            numberOfL=0;   
            numberOfR=0;
             newSplit="";
        }
    }
    cout<<Splits.size()<<endl;
    for (int i = 0; i < Splits.size(); i++)
    {
        cout<<Splits[i]<<endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
string text;
cin>>text;
findSplit(text);
    return 0;
}