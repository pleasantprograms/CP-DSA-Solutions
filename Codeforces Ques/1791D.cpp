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
        string s;
        cin >> n >> s;
        unordered_map<char,ll> x;
        unordered_map<char,ll> y;

        for(ll i=0; i<n; i++) x[s[i]]++;

        ll ans = 0;
        for(ll i=0; i<n; i++)
        {
            x[s[i]]--;
            y[s[i]]++;
            if (x[s[i]]==0) x.erase(s[i]);
            ll sum = x.size()+y.size();
            ans = max(ans,sum);
        }
        cout << ans << endl;
    }
}