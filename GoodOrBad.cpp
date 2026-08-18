#include <iostream>
#include <string>
using namespace std;
bool check(const string& s, int n)
{
    if (n + 2 >= s.length())
    {
        return false;
    }

    if ((s[n] == '0' && s[n + 1] == '1' && s[n + 2] == '0') ||
        (s[n] == '1' && s[n + 1] == '0' && s[n + 2] == '1'))
    {
        return true;
    }

    return check(s, n + 1);
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string s;
        cin>>s;
        if (check(s, 0))
        {
            cout << "Good"<<endl;
        }
        else
        {
            cout << "Bad"<<endl;
        }
    }
}