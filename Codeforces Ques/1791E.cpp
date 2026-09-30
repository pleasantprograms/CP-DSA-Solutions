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
        ll ans = 0;
        ll neg = 0;
        ll minel = LLONG_MAX;
        for(ll i=0; i<n; i++) 
        {
            ll x;
            cin >> x;
            if (x<0) neg++;
            minel = min(minel,abs(x));
            ans+=abs(x);
        }
        if (neg%2==0) cout << ans << endl;
        else cout << ans-2*minel << endl;    
    }
}