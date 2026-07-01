#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool pos(vector<ll> a, ll x, ll s)
{
    ll count = 0;
    for(int i=0; i<a.size(); i++)
    {
        a[i] = a[i] + (i+1)*(x);
    }
    sort(a.begin(),a.end());
    ll sum = 0;
    for(int i=0; i<x; i++)
    {
        sum+=a[i];
    }
    if (sum>s) return false;
    else return true;
}

int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    ll low = 1;
    ll high = n;
    ll mid = low + (high-low)/2;
    ll ans = 1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if (pos(a, mid, s))
        {
            low = mid+1;
            ans = mid;
        }
        else
        {
            high = mid-1;
        }
    }
    for(int i=0; i<a.size(); i++)
    {
        a[i] = a[i] + (i+1)*(ans);
    }
    sort(a.begin(),a.end());
    if (ans==1)
    {
        if (a[0]>s)
        {
            cout << 0 << " " << 0 << endl;
            return 0;
        }
    }
    ll cnt = 0;
    ll sum = 0;
    for(int i=0; i<ans; i++)
    {
        sum+=a[i];
    }
    cout << ans << " " << sum << endl; 
}