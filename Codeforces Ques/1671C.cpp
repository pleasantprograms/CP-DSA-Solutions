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
        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin >> p[i];
        sort(p.begin(),p.end());
        vector<ll> pref;
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            sum+=p[i];
            pref.push_back(sum);
        }
        ll ans = 0;
        for(ll i=0; i<n; i++)
        {
            if (x-pref[i]>=0)
            {
                ans+=((x-pref[i])/(i+1))+1;
            }
        }
        cout << ans << endl;
    }
}