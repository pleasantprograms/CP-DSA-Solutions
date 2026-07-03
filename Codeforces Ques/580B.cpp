#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, d;
    cin >> n >> d;
    vector<pair<ll,ll>> p;
    for(int i=0; i<n; i++)
    {
        ll x, y;
        cin >> x >> y;
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    ll l = 0;
    ll ans = 0;
    ll sum = 0;
    for(ll r=0; r<n; r++)
    {
        sum += p[r].second;

        while (p[r].first - p[l].first >= d)
        {
            sum -= p[l].second;
            l++;
        }

        ans = max(ans, sum);
    }
    cout << ans << endl;  
}