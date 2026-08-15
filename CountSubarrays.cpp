#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int numberOfElment;
        cin >> numberOfElment;
        long long arr[numberOfElment];
        for (int j = 0; j < numberOfElment; j++)
        {
            cin >> arr[j];
        }
        int sum = 0;
        for (int j = 0; j < numberOfElment; j++)
        {
            int cont = 1;
            for (int k = j + 1; k < numberOfElment && arr[k] >= arr[k - 1]; k++)
            {
                cont++;
            }
            sum += cont;
        }
        cout << sum << endl;
    }

    return 0;
}