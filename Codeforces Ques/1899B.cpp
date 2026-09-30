#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> prefix(n+1);
        prefix[0] = 0;
        for(ll i=1; i<n+1; i++)
        {
            ll x;
            cin >> x;
            prefix[i] = prefix[i-1] + x;
        }
        vector<ll> div;
        for(ll i=1; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                if (n/i!=i)
                {
                    div.push_back(i);
                    div.push_back(n/i);
                }
                else div.push_back(i);
            }
        }

        ll ans = 0;
        for(ll i=0; i<div.size(); i++)
        {
            ll x = div[i];
            ll j = 0;
            ll val1 = LLONG_MIN;
            ll val2 = LLONG_MAX;
            while(j+x<=n)
            {
                val1 = max(val1,prefix[j+x]-prefix[j]);
                val2 = min(val2,prefix[j+x]-prefix[j]);
                j+=x;
            }
            ans = max(ans,val1-val2);
        }
        cout << ans << endl;
    }
}