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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if (s < k*b || s> k*b + (k-1)*n ) cout << -1 << endl;
        else
        {
            vector<ll> ans(n,0);
            ans[0] = k*b;
            ll left = (s-ans[0]);
            for(ll i=0; i<n; i++)
            {
                ans[i]+=min(k-1,left);
                left-=(k-1);
                if (left<0) left = 0;
            }
            for(ll i=0; i<n; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
}