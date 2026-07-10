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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> pref;
        ll sum = 0;
        pref.push_back(sum);
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i]+0LL;
            pref.push_back(sum);
        }
        vector<ll> k(q);
        for(ll i=0; i<q; i++) cin >> k[i];

        vector<ll> mx;
        ll m = INT_MIN;
        for(int i=0; i<n; i++)
        {
            m = max(m,a[i]);
            mx.push_back(m);
        }

        for(ll i=0; i<q; i++)
        {
            ll val = k[i];
            ll l = 0;
            ll r = n-1;
            ll req = -1;
            while(l<=r)
            {
                ll mid = l + (r-l)/2;
                if (mx[mid]<=val)
                {
                    req = mid;
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
            cout << pref[req+1] << " ";
        }
        cout << endl;
    }
}
