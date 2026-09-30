#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);

    for(ll i=0; i<n; i++) cin >> x[i];
    for(ll i=0; i<n; i++) cin >> y[i];
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
            ll p = x[j] - x[i];
            ll q = y[j] - y[i];
            ans = max(ans,(p*p+q*q));
        }
    }
    cout << ans << endl;
}