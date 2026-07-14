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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> t(n);
        for(ll i=0; i<n; i++) cin >> t[i];

        ll l = 0;
        ll r = 0;
        ll len = 0;
        ll ans = 0;
        while(r<n)
        {
            if (t[r]<=q) 
            {
                len = r-l+1;
                if (len>=k)
                {
                    ans+=(len-k+1);
                }
            }
            else
            {
                len = 0;
                l = r+1;
            }
            r++;
        }
        cout << ans << endl;
    }
}