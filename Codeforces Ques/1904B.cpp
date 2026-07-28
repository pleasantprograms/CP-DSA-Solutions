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
        ll n;
        cin >> n;
        vector<pair<ll,ll>> p;
        vector<ll> ans(n);
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            p.push_back({x,i});
        }
        sort(p.begin(),p.end());
        vector<ll> pref(n);
        pref[0] = p[0].first;
        for(ll i=1; i<n; i++)
        {
            pref[i] = pref[i-1]+p[i].first;
        }
        vector<ll> a(n);
        for(ll i=0; i<n; i++) a[i] = p[i].first;
        for(ll i=0; i<n; i++)
        {
            ll j = i;
            ll found = i;
            while(j<n)
            {
                ll idx = lower_bound(a.begin(),a.end(),pref[j]+1)-a.begin();
                idx--;
                if (idx==j) break;
                found+=(idx-j);
                j = idx;
            }
            ans[p[i].second] = found;
        }

        for(ll i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
}