#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool pos(vector<ll>& p, ll r, ll t)
{
    ll l = 0;
    ll sum = p[r];
    while(l+r<p.size())
    {
        if (sum>t)
        {
            l++;
            if (l+r>=p.size()) break;
            else sum = p[l+r] - p[l];
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> p;
    p.push_back(0LL);
    ll sum = 0LL;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
        p.push_back(sum);
    }

    ll low = 0;
    ll high = n;
    ll mid = low + (high-low)/2;
    ll ans = 0;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if (pos(p, mid, t))
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout << ans << endl;
}