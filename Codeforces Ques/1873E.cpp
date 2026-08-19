#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        ll l = 1;
        ll r = INT_MAX;
        ll ans = 1;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            ll sum = 0;
            for(ll i=0; i<n; i++) if (v[i]<=mid) sum+=(mid-v[i]);

            if (sum>x) r = mid-1;
            else
            {
                ans = mid;
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
}