#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll sum = 0;
        sum+=(b-1);
        ll curr = 1;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if (curr+x>a)
            {
                curr = a;
            }
            else
            {
                curr = 1+x;
            }
            if (curr!=1)
            {
                sum+=(curr-1);
                curr = 1;
            }
        }
        cout << sum+1 << endl;
    }
}