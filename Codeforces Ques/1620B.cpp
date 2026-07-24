#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;
        
        ll a, b, c, d;
        
        cin >> a;
        vector<ll> p(a);
        for(ll i=0; i<a; i++) cin >> p[i];

        cin >> b;
        vector<ll> q(b);
        for(ll i=0; i<b; i++) cin >> q[i];

        cin >> c;
        vector<ll> r(c);
        for(ll i=0; i<c; i++) cin >> r[i];

        cin >> d;
        vector<ll> s(d);
        for(ll i=0; i<d; i++) cin >> s[i];

        ll ans = 0;

        ans = max(ans,h*(p[a-1]-p[0]));
        ans = max(ans,h*(q[b-1]-q[0]));
        ans = max(ans,w*(r[c-1]-r[0]));
        ans = max(ans,w*(s[d-1]-s[0]));

        cout << ans << endl;
    }
}
