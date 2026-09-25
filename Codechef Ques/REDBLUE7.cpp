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
        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin >> p[i];
        sort(p.begin(),p.end());
        ll sum = 0;
        for(ll i=0; i<n; i++) sum+=p[i];
        ll ans = 0;
        ll cr = 0;
        ll cb = n;
        ll curr = 0;
        for(ll i=0; i<n; i++)
        {
            cr++;
            cb--;
            curr+=p[i];
            sum-=p[i];
            ans = max(ans,curr*cb+sum*cr);
        }
        cout << ans << endl;
    }
}