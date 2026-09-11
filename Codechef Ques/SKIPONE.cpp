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
        ll n, k;
        cin >> n >> k;
        bool gre = false;
        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin >> p[i];
        vector<ll> m(n);
        m[0] = p[0];
        for(ll i=1; i<n; i++) m[i]=max(m[i-1],p[i]);
        ll sum = 0;
        vector<ll> x(n);
        for(ll i=0; i<n; i++)
        {
            sum+=p[i];
            x[i]=(sum-m[i]);
        }
        ll ans = -1;
        for(ll i=0; i<n; i++)
        {
            if (x[i]>k)
            {
                ans = i;
                break;
            }
            else if (x[i]==k)
            {
                ans = i+1;
                break;
            }
        }
        if (ans==-1) ans = n;
        cout << ans << endl;
    }
}