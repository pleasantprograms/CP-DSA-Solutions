#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> p(n);
        map<ll,ll> mpp;
        for(ll i=0; i<n; i++) 
        {
            cin >> p[i];
            mpp[p[i]]++;
        }
        sort(p.begin(),p.end());
        ll ans = -1;
        for(ll i=1; i<=m; i++)
        {
            ll idx = lower_bound(p.begin(),p.end(), i)-p.begin();
            ans = max(ans,n-idx+mpp[i*2]);
        }
        cout << ans << endl;
    }
}