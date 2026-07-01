#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool pos(vector<ll> a, vector<ll> b, ll k, ll x)
{
    ll need = 0;
    for(int i=0; i<a.size(); i++)
    {
        need+=max(0LL,x*a[i]-b[i]);
        if (need>k) return false;
    }
    return true;
}

int main() 
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    ll low = 0;
    ll high = 2000000000;
    ll mid = low+(high-low)/2;
    ll ans = 0;
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if (pos(a, b, k, mid)) 
        {   
            low = mid+1;
            ans = mid;
        }
        else high = mid-1;
    }
    cout << ans << endl;
}