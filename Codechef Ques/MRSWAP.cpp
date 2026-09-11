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
        vector<ll> p(2*n);
        for(ll i=0; i<2*n; i++) cin >> p[i];
        for(ll i=0; i<n; i++)
        {
            if (p[i]<=p[2*n-i-1]) swap(p[i],p[2*n-i-1]);
        }
        ll sum = 0;
        for(ll i=0; i<n; i++) sum+=p[i];
        cout << sum << endl;
    }
}
