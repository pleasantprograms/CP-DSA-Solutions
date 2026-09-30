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
        for(ll i=0; i<n; i++)
        {
            cin >> p[i];
            p[i]+=(i+1);
        }
        sort(p.begin(),p.end());
        ll ans = 0;
        ll i = 0;
        while(i<n)
        {
            ans+=p[i];
            if (ans>x) break;
            i++;
        }
        cout << i << endl;
    }
}