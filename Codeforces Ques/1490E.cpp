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
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            p.push_back({x,i+1});
        }
        sort(p.begin(),p.end());
        vector<ll> pref;
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            sum+=p[i].first;
            pref.push_back(sum);
        }
        ll req = -1;
        for(ll i=0; i<n-1; i++)
        {
            if (pref[i] < p[i+1].first)
            {
                req = i;
            }
        }
        vector<ll> ans;
        for(ll i=req+1; i<n; i++)
        {
            ans.push_back(p[i].second);
        }
        sort(ans.begin(),ans.end());
        cout << ans.size() << endl;
        for(ll i=0; i<ans.size(); i++)
        {
            cout << ans[i] << " " ;
        }
        cout << endl;
    }

}