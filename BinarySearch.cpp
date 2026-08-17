#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        bool ok = false;
        int elemnt;
        cin >> elemnt;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == elemnt)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "found";
        }
        else
        {
            cout << "not found";
        }
    }
}