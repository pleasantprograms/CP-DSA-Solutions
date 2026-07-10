#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);

        ll min1 = INT_MAX;
        ll min2 = INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            min1 = min(min1,a[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            min2 = min(min2,b[i]);
        }
        vector<pair<ll,ll>> p;
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            p.push_back({a[i]-min1,b[i]-min2});
            ans += max(p[i].first,p[i].second);
        }
        cout << ans << endl;
    }
}
