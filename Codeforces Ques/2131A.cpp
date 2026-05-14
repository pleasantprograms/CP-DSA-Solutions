#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        int ans=0;

        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> b[i];
        }

        for (int i=0; i<n; i++)
        {
            if (a[i]>b[i])
            {
                ans = ans + a[i] - b[i];
            }
        }
        cout << ans + 1 << endl;
    }
}