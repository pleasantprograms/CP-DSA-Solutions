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
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        ll c1 = 0;
        ll c2 = 0;
        for(ll i=0; i<n; i++)
        {
            ll k = a[n-1]-a[i];
            c2 += k/2;
            c1 += k%2;
        }
        ll mind = LLONG_MAX;
        ll reqc2 = 0, reqc1 = 0;
        while(c2>=0)
        {
            ll diff = abs(c2-c1);
            mind = min(mind,diff);

            if (mind == diff)
            {
                reqc2 = c2;
                reqc1 = c1;
            }
            c2--;
            c1+=2;
        }
        ll ans = 0;
        if (reqc2>=reqc1)
        {
            ans = reqc2 * 2;
        }
        else
        {
            ll l = reqc1 - reqc2;
            ans = reqc2*2 + l*2 - 1;
        }
        cout << ans << endl;
    }
}