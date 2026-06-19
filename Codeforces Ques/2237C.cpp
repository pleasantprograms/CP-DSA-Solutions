#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if (a[i]>a[i+1])
            {
                a[i+1]+=a[i]+0LL;
            }
        }
        cout << a[n-1] << endl;
    }
}