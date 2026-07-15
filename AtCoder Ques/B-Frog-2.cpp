#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for(ll i=0; i<n; i++) cin >> h[i];

    vector<ll> dp(n,-1);
    dp[0] = 0;
    for(ll i=1; i<n; i++)
    {
        dp[i] = dp[i-1] + abs(h[i]-h[i-1]);
        for(ll j=1; j<=k && i-j>=0; j++)
        {
            dp[i] = min(dp[i],dp[i-j] + abs(h[i]-h[i-j]));
        }
    }
    cout << dp[n-1] << endl;
}