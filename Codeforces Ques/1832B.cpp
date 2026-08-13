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
        vector<ll> a(n);
        ll ans = INT_MIN;
        ll sum = 0;
        vector<ll> pref;
        for(ll i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            pref.push_back(sum);
        }
        ll l = 2*k-1, r = n-1;
        ans = max(ans,pref[n-k-1]);
        while(k--)
        {
            ans = max(ans,pref[r]-pref[l]);
            l-=2;
            r--;
        }
        cout << ans << endl;
    }      
}