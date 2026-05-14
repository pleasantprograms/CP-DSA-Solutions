#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k, x;
        cin >> k >> x;

        for (int i=1; i<=k; i++)
        {
            x*=2;
        }
        cout << x << endl;
    }
}